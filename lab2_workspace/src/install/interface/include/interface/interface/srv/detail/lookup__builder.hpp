// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:srv/Lookup.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__LOOKUP__BUILDER_HPP_
#define INTERFACE__SRV__DETAIL__LOOKUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/srv/detail/lookup__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace srv
{

namespace builder
{

class Init_Lookup_Request_fromframe
{
public:
  explicit Init_Lookup_Request_fromframe(::interface::srv::Lookup_Request & msg)
  : msg_(msg)
  {}
  ::interface::srv::Lookup_Request fromframe(::interface::srv::Lookup_Request::_fromframe_type arg)
  {
    msg_.fromframe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::srv::Lookup_Request msg_;
};

class Init_Lookup_Request_toframe
{
public:
  Init_Lookup_Request_toframe()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lookup_Request_fromframe toframe(::interface::srv::Lookup_Request::_toframe_type arg)
  {
    msg_.toframe = std::move(arg);
    return Init_Lookup_Request_fromframe(msg_);
  }

private:
  ::interface::srv::Lookup_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::srv::Lookup_Request>()
{
  return interface::srv::builder::Init_Lookup_Request_toframe();
}

}  // namespace interface


namespace interface
{

namespace srv
{

namespace builder
{

class Init_Lookup_Response_pose
{
public:
  Init_Lookup_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface::srv::Lookup_Response pose(::interface::srv::Lookup_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::srv::Lookup_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::srv::Lookup_Response>()
{
  return interface::srv::builder::Init_Lookup_Response_pose();
}

}  // namespace interface

#endif  // INTERFACE__SRV__DETAIL__LOOKUP__BUILDER_HPP_
