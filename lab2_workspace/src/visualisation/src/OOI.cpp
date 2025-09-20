// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// program creates sphere and tracks the dynamic transformation of the OOI frame

#include <chrono>
#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "tf2/exceptions.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "geometry_msgs/msg/transform_stamped.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class SpherePublisher : public rclcpp::Node
{
public:
  SpherePublisher()
  : Node("sphere_publisher")
  {
    marker_pub = this->create_publisher<visualization_msgs::msg::Marker>("visualization_marker", 1);
    sphere_timer = this->create_wall_timer(
      100ms, std::bind(&SpherePublisher::spherepub_callback, this)); 
    tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
    //listener_timer = this->create_wall_timer( std::chrono::milliseconds(100), std::bind(&TF2Listener::ListenerCallback, this));
  }

private:
  void spherepub_callback()
  {
    std::string fromFrameRel = "";
    std::string toFrameRel = "";
    geometry_msgs::msg::TransformStamped t;

    fromFrameRel = "map";
    toFrameRel = "OOI";
    try {
      t = tf_buffer_->lookupTransform(fromFrameRel, toFrameRel, tf2::TimePointZero);
    } catch (const tf2::TransformException & ex) {
      RCLCPP_INFO(this->get_logger(), "Could not transform %s to %s: %s", fromFrameRel.c_str(), toFrameRel.c_str(), ex.what());
      return;
    }
   

    visualization_msgs::msg::Marker marker;

    marker.header.frame_id = "map";
    marker.header.stamp = rclcpp::Clock().now();

    marker.ns = "basic_shapes";
    marker.id = 0; // unique id that I chose

    marker.type = visualization_msgs::msg::Marker::SPHERE;
    marker.action = visualization_msgs::msg::Marker::ADD;

    marker.pose.position.x = t.transform.translation.x;
    marker.pose.position.y = t.transform.translation.y;
    marker.pose.position.z = t.transform.translation.z;
    marker.pose.orientation.x = t.transform.rotation.x;
    marker.pose.orientation.y = t.transform.rotation.y;
    marker.pose.orientation.z = t.transform.rotation.z;
    marker.pose.orientation.w = t.transform.rotation.w;

    // marker.pose.position.x = 0;
    // marker.pose.position.y = 0;
    // marker.pose.position.z = 0;
    // marker.pose.orientation.x = 0.0;
    // marker.pose.orientation.y = 0.0;
    // marker.pose.orientation.z = 0.0;
    // marker.pose.orientation.w = 1.0;

    marker.scale.x = 0.1;
    marker.scale.y = 0.1;
    marker.scale.z = 0.1;

    marker.color.r = 1.0f;
    marker.color.g = 0.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0; // sets the colour alpha
    // setting 0 means marker never auto-deletes
    marker.lifetime = rclcpp::Duration::from_nanoseconds(0); 

    marker_pub->publish(marker);
  }

//   void listener_callback()
//   {
//     std::string fromFrameRel = "";
//     std::string toFrameRel = "";
//     geometry_msgs::msg::TransformStamped t;
   

//     fromFrameRel = "map";
//     toFrameRel = "OOI";
//     t = tf_buffer_->lookupTransform(fromFrameRel, toFrameRel, tf2::TimePointZero);

//     marker.pose.position.x = t.transform.translation.x;
//     marker.pose.position.y = t.transform.translation.y;
//     marker.pose.position.z = t.transform.translation.z;
//     marker.pose.orientation.x = t.transform.rotation.x;
//     marker.pose.orientation.y = t.transform.rotation.y;
//     marker.pose.orientation.z = t.transform.rotation.z;
//     marker.pose.orientation.w = t.transform.rotation.w;
//   }

   rclcpp::TimerBase::SharedPtr sphere_timer;
  // rclcpp::TimerBase::SharedPtr listener_timer;
   std::shared_ptr<tf2_ros::TransformListener> tf_listener_{nullptr};
   std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
   rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub;
   //visualization_msgs::msg::Marker marker;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SpherePublisher>());
  rclcpp::shutdown();
  return 0;
}
