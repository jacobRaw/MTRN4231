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

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int64.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "tutorial_interfaces/msg/posestamped.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<tutorial_interfaces::msg::Posestamped>("lab1_topic", 10);
    timer_ = this->create_wall_timer(
      1000ms, std::bind(&MinimalPublisher::timer_callback, this)); 
  }

private:
  void timer_callback()
  {
    auto message = tutorial_interfaces::msg::Posestamped();
    message.pos3d.orientation.x = 0.0;
    message.pos3d.orientation.y = 2.2;
    message.pos3d.orientation.z = 1.1;
    message.pos3d.orientation.w = 4.4;
    RCLCPP_INFO(this->get_logger(), "Orientation Sent - X: %f, Y: %f, Z: %f, W: %f, time: %fs", message.pos3d.orientation.x, message.pos3d.orientation.y, message.pos3d.orientation.z, message.pos3d.orientation.w, message.time.sec);
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<tutorial_interfaces::msg::Posestamped>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
