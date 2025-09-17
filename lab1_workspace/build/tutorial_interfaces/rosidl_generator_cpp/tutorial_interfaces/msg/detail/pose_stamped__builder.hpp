// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/PoseStamped.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/pose_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseStamped_time
{
public:
  explicit Init_PoseStamped_time(::tutorial_interfaces::msg::PoseStamped & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::PoseStamped time(::tutorial_interfaces::msg::PoseStamped::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::PoseStamped msg_;
};

class Init_PoseStamped_pos3d
{
public:
  Init_PoseStamped_pos3d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseStamped_time pos3d(::tutorial_interfaces::msg::PoseStamped::_pos3d_type arg)
  {
    msg_.pos3d = std::move(arg);
    return Init_PoseStamped_time(msg_);
  }

private:
  ::tutorial_interfaces::msg::PoseStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::PoseStamped>()
{
  return tutorial_interfaces::msg::builder::Init_PoseStamped_pos3d();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__BUILDER_HPP_
