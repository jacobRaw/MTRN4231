// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:srv/Lookup.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__LOOKUP__TRAITS_HPP_
#define INTERFACE__SRV__DETAIL__LOOKUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/srv/detail/lookup__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Lookup_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: toframe
  {
    out << "toframe: ";
    rosidl_generator_traits::value_to_yaml(msg.toframe, out);
    out << ", ";
  }

  // member: fromframe
  {
    out << "fromframe: ";
    rosidl_generator_traits::value_to_yaml(msg.fromframe, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lookup_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: toframe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toframe: ";
    rosidl_generator_traits::value_to_yaml(msg.toframe, out);
    out << "\n";
  }

  // member: fromframe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fromframe: ";
    rosidl_generator_traits::value_to_yaml(msg.fromframe, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lookup_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::srv::Lookup_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface::srv::Lookup_Request & msg)
{
  return interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface::srv::Lookup_Request>()
{
  return "interface::srv::Lookup_Request";
}

template<>
inline const char * name<interface::srv::Lookup_Request>()
{
  return "interface/srv/Lookup_Request";
}

template<>
struct has_fixed_size<interface::srv::Lookup_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::srv::Lookup_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::srv::Lookup_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Lookup_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lookup_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lookup_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::srv::Lookup_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface::srv::Lookup_Response & msg)
{
  return interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface::srv::Lookup_Response>()
{
  return "interface::srv::Lookup_Response";
}

template<>
inline const char * name<interface::srv::Lookup_Response>()
{
  return "interface/srv/Lookup_Response";
}

template<>
struct has_fixed_size<interface::srv::Lookup_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<interface::srv::Lookup_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<interface::srv::Lookup_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface::srv::Lookup>()
{
  return "interface::srv::Lookup";
}

template<>
inline const char * name<interface::srv::Lookup>()
{
  return "interface/srv/Lookup";
}

template<>
struct has_fixed_size<interface::srv::Lookup>
  : std::integral_constant<
    bool,
    has_fixed_size<interface::srv::Lookup_Request>::value &&
    has_fixed_size<interface::srv::Lookup_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface::srv::Lookup>
  : std::integral_constant<
    bool,
    has_bounded_size<interface::srv::Lookup_Request>::value &&
    has_bounded_size<interface::srv::Lookup_Response>::value
  >
{
};

template<>
struct is_service<interface::srv::Lookup>
  : std::true_type
{
};

template<>
struct is_service_request<interface::srv::Lookup_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface::srv::Lookup_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__SRV__DETAIL__LOOKUP__TRAITS_HPP_
