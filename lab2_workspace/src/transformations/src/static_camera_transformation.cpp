#include <rclcpp/rclcpp.hpp>
#include "tf2_ros/static_transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"
#include <geometry_msgs/msg/transform_stamped.hpp>

class StaticTFBroadcaster : public rclcpp::Node
{
public:
  StaticTFBroadcaster() : Node("static_tf_broadcaster")
  {
    // Create a static transform broadcaster
    tf_static_broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);


    // Fill out the transformation stamped message
    transformStamped_.header.frame_id = "map";
    transformStamped_.child_frame_id = "camera_frame";   
    transformStamped_.transform.translation.x = 1.2;
    transformStamped_.transform.translation.y = 0;
    transformStamped_.transform.translation.z = 1.0;
    // Define a rotation of -45 degrees around the Z axis using an online quaternion calculator
    // transformStamped_.transform.rotation.w = 0.924;
    // transformStamped_.transform.rotation.x = 0;
    // transformStamped_.transform.rotation.y = 0;
    // transformStamped_.transform.rotation.z = -0.383;
    // alternative is to use tf2::Quaternion to create the quaternion
    tf2::Quaternion q;
    q.setRPY(0, 0, -M_PI/4); // Roll, Pitch, Yaw
    transformStamped_.transform.rotation.x = q.x();
    transformStamped_.transform.rotation.y = q.y();
    transformStamped_.transform.rotation.z = q.z();
    transformStamped_.transform.rotation.w = q.w();  

    // Broadcaster static transformation
    tf_static_broadcaster_->sendTransform(transformStamped_);
  }

private:
  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_static_broadcaster_;
  geometry_msgs::msg::TransformStamped transformStamped_;
  rclcpp::TimerBase::SharedPtr publish_timer_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StaticTFBroadcaster>());
  rclcpp::shutdown();
  return 0;
}
