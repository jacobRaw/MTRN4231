// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Posestamped.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POSESTAMPED__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POSESTAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/posestamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Posestamped_time
{
public:
  explicit Init_Posestamped_time(::tutorial_interfaces::msg::Posestamped & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::Posestamped time(::tutorial_interfaces::msg::Posestamped::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Posestamped msg_;
};

class Init_Posestamped_center
{
public:
  Init_Posestamped_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Posestamped_time center(::tutorial_interfaces::msg::Posestamped::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Posestamped_time(msg_);
  }

private:
  ::tutorial_interfaces::msg::Posestamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Posestamped>()
{
  return tutorial_interfaces::msg::builder::Init_Posestamped_center();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POSESTAMPED__BUILDER_HPP_
