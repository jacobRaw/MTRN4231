#include <rclcpp/rclcpp.hpp>
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <cmath>

class DynamicTFBroadcaster : public rclcpp::Node
{
  public:
    DynamicTFBroadcaster() : Node("dynamic_tf_broadcaster")
    {
      timer_ = create_wall_timer(std::chrono::milliseconds(100), std::bind(&DynamicTFBroadcaster::publishDynamicTransform, this));
      tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
    }


  private:
    void publishDynamicTransform()
    {
      double t = rclcpp::Clock().now().seconds();
      double sin_value = std::sin(t);
      geometry_msgs::msg::TransformStamped transform_msg;

      //TODO: Place transformation broadcaster code here
      transform_msg.header.frame_id = "camera_frame";
      transform_msg.child_frame_id = "OOI";
      transform_msg.transform.translation.x = 0.5;
      transform_msg.transform.translation.y = 0.0;
      transform_msg.transform.translation.z = sin_value;
      transform_msg.transform.rotation.w = 1.0;
      transform_msg.transform.rotation.x = 0.0;
      transform_msg.transform.rotation.y = 0.0;
      transform_msg.transform.rotation.z = 0.0;

      tf_broadcaster_->sendTransform(transform_msg);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DynamicTFBroadcaster>());
    rclcpp::shutdown();
    return 0;
}