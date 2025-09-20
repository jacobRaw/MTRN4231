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
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "tf2/exceptions.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "my_interface/srv/lookup.hpp"

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
    client_ = create_client<my_interface::srv::Lookup>("lookup_server");
    while (!client_->wait_for_service(std::chrono::seconds(1)))
    {
      RCLCPP_INFO(get_logger(), "Service not available, waiting...");
    }
  }

private:

  // CRUCIAL - CANNOT DO ANYTHING AFTER THE ASYNC SEND REQUEST BECAUSE IT HANGS
  // IF YOU NEED TO STORE ANY INFORMATION FROM THE SERVICE CALL THEN IT SHOULD BE STORED IN THE HANDLE RESPOSNE
  void call_service(const std::string fromFrame, const std::string toFrame) {
    auto request = std::make_shared<my_interface::srv::Lookup::Request>();
    request->fromframe = fromFrame;
    request->toframe = toFrame;

    auto future_result = client_->async_send_request(
      request,
      std::bind(&SpherePublisher::handle_response, this, std::placeholders::_1)
    );
  }

  void handle_response(rclcpp::Client<my_interface::srv::Lookup>::SharedFuture future)
  {
    auto result = future.get();
    if (!result) {
        RCLCPP_ERROR(get_logger(), "Service call failed");
        return;
    }

    t = future.get()->pose;
  }

  void spherepub_callback()
  {
    //This manually looksup the transform between map and OOI frames
    // std::string fromFrameRel = "";
    // std::string toFrameRel = "";
    // geometry_msgs::msg::TransformStamped t;

    // fromFrameRel = "map";
    // toFrameRel = "OOI";
    // try {
    //   t = tf_buffer_->lookupTransform(fromFrameRel, toFrameRel, tf2::TimePointZero);
    // } catch (const tf2::TransformException & ex) {
    //   RCLCPP_INFO(this->get_logger(), "Could not transform %s to %s: %s", fromFrameRel.c_str(), toFrameRel.c_str(), ex.what());
    //   return;
    // }
    
    //This calls the service to lookup the transform between map and OOI frames 
    // this can be better so that we don't repeat the lookup code 
    // However, since this data is constantly changing a publisher would probably be better than a 
    // service but for the sake of learning a service is used here instead.
    
    std::string fromFrameRel = "map";
    std::string toFrameRel = "OOI";
    SpherePublisher::call_service(fromFrameRel, toFrameRel);

    visualization_msgs::msg::Marker marker;

    marker.header.frame_id = "map";
    marker.header.stamp = rclcpp::Clock().now();

    marker.ns = "basic_shapes";
    marker.id = 0; // unique id that I chose

    marker.type = visualization_msgs::msg::Marker::SPHERE;
    marker.action = visualization_msgs::msg::Marker::ADD;

    marker.pose.position.x = t.position.x;
    marker.pose.position.y = t.position.y;
    marker.pose.position.z = t.position.z;
    marker.pose.orientation.x = t.orientation.x;
    marker.pose.orientation.y = t.orientation.y;
    marker.pose.orientation.z = t.orientation.z;
    marker.pose.orientation.w = t.orientation.w;

    marker.scale.x = 0.1;
    marker.scale.y = 0.1;
    marker.scale.z = 0.1;

    marker.color.r = 1.0f;
    marker.color.g = 0.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0; // sets the colour alpha

    marker.lifetime = rclcpp::Duration::from_nanoseconds(0); 

    marker_pub->publish(marker);
  }

   rclcpp::TimerBase::SharedPtr sphere_timer;
   std::shared_ptr<tf2_ros::TransformListener> tf_listener_{nullptr};
   std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
   rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub;
   rclcpp::Client<my_interface::srv::Lookup>::SharedPtr client_;
   geometry_msgs::msg::Pose t;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SpherePublisher>());
  rclcpp::shutdown();
  return 0;
}
