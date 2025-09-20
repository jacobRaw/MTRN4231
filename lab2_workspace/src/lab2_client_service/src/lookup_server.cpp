// int_addition_server.cpp
#include "rclcpp/rclcpp.hpp"
#include "my_interface/srv/lookup.hpp"
#include "tf2/exceptions.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "geometry_msgs/msg/transform_stamped.hpp"

class LookupServer : public rclcpp::Node
{
public:
  LookupServer() : Node("lookup_server")
  {
    srv_ = create_service<my_interface::srv::Lookup>("lookup_server",
                                                    std::bind(&LookupServer::getTF, this, std::placeholders::_1, std::placeholders::_2));
    tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
  }

private:
  void getTF(const std::shared_ptr<my_interface::srv::Lookup::Request> request,
           std::shared_ptr<my_interface::srv::Lookup::Response> response)
  {
    geometry_msgs::msg::TransformStamped t;

    try {
      t = tf_buffer_->lookupTransform(request->fromframe, request->toframe, tf2::TimePointZero);
    } catch (const tf2::TransformException & ex) {
      RCLCPP_INFO(this->get_logger(), "Could not transform %s to %s: %s", request->fromframe.c_str(), request->toframe.c_str(), ex.what());
      response->pose.position.x = 0;
      response->pose.position.y = 0;
      response->pose.position.z = 0;
      response->pose.orientation.x = 0;
      response->pose.orientation.y = 0;
      response->pose.orientation.z = 0;
      response->pose.orientation.w = 0;
      return;
    }

    response->pose.position.x = t.transform.translation.x;
    response->pose.position.y = t.transform.translation.y;
    response->pose.position.z = t.transform.translation.z;
    response->pose.orientation.x = t.transform.rotation.x;
    response->pose.orientation.y = t.transform.rotation.y;
    response->pose.orientation.z = t.transform.rotation.z;
    response->pose.orientation.w = t.transform.rotation.w;
    RCLCPP_INFO(this->get_logger(), "sent response");
  }

  rclcpp::Service<my_interface::srv::Lookup>::SharedPtr srv_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_{nullptr};
  std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto server = std::make_shared<LookupServer>();
  rclcpp::spin(server);
  rclcpp::shutdown();
  return 0;
}
