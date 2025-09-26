// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from input_interfaces:action/UserInput.idl
// generated code does not contain a copyright notice

#ifndef INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__TRAITS_HPP_
#define INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "input_interfaces/action/detail/user_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: parameters
  {
    out << "parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.parameters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.parameters, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_Goal & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_Goal>()
{
  return "input_interfaces::action::UserInput_Goal";
}

template<>
inline const char * name<input_interfaces::action::UserInput_Goal>()
{
  return "input_interfaces/action/UserInput_Goal";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<input_interfaces::action::UserInput_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: state_msg
  {
    out << "state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.state_msg, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: state_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.state_msg, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_Result & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_Result>()
{
  return "input_interfaces::action::UserInput_Result";
}

template<>
inline const char * name<input_interfaces::action::UserInput_Result>()
{
  return "input_interfaces/action/UserInput_Result";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<input_interfaces::action::UserInput_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_msg
  {
    out << "state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.state_msg, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.state_msg, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_Feedback & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_Feedback>()
{
  return "input_interfaces::action::UserInput_Feedback";
}

template<>
inline const char * name<input_interfaces::action::UserInput_Feedback>()
{
  return "input_interfaces/action/UserInput_Feedback";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<input_interfaces::action::UserInput_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "input_interfaces/action/detail/user_input__traits.hpp"

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_SendGoal_Request & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_SendGoal_Request>()
{
  return "input_interfaces::action::UserInput_SendGoal_Request";
}

template<>
inline const char * name<input_interfaces::action::UserInput_SendGoal_Request>()
{
  return "input_interfaces/action/UserInput_SendGoal_Request";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<input_interfaces::action::UserInput_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<input_interfaces::action::UserInput_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<input_interfaces::action::UserInput_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_SendGoal_Response & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_SendGoal_Response>()
{
  return "input_interfaces::action::UserInput_SendGoal_Response";
}

template<>
inline const char * name<input_interfaces::action::UserInput_SendGoal_Response>()
{
  return "input_interfaces/action/UserInput_SendGoal_Response";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<input_interfaces::action::UserInput_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<input_interfaces::action::UserInput_SendGoal>()
{
  return "input_interfaces::action::UserInput_SendGoal";
}

template<>
inline const char * name<input_interfaces::action::UserInput_SendGoal>()
{
  return "input_interfaces/action/UserInput_SendGoal";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<input_interfaces::action::UserInput_SendGoal_Request>::value &&
    has_fixed_size<input_interfaces::action::UserInput_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<input_interfaces::action::UserInput_SendGoal_Request>::value &&
    has_bounded_size<input_interfaces::action::UserInput_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<input_interfaces::action::UserInput_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<input_interfaces::action::UserInput_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<input_interfaces::action::UserInput_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_GetResult_Request & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_GetResult_Request>()
{
  return "input_interfaces::action::UserInput_GetResult_Request";
}

template<>
inline const char * name<input_interfaces::action::UserInput_GetResult_Request>()
{
  return "input_interfaces/action/UserInput_GetResult_Request";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<input_interfaces::action::UserInput_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "input_interfaces/action/detail/user_input__traits.hpp"

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_GetResult_Response & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_GetResult_Response>()
{
  return "input_interfaces::action::UserInput_GetResult_Response";
}

template<>
inline const char * name<input_interfaces::action::UserInput_GetResult_Response>()
{
  return "input_interfaces/action/UserInput_GetResult_Response";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<input_interfaces::action::UserInput_Result>::value> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<input_interfaces::action::UserInput_Result>::value> {};

template<>
struct is_message<input_interfaces::action::UserInput_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<input_interfaces::action::UserInput_GetResult>()
{
  return "input_interfaces::action::UserInput_GetResult";
}

template<>
inline const char * name<input_interfaces::action::UserInput_GetResult>()
{
  return "input_interfaces/action/UserInput_GetResult";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<input_interfaces::action::UserInput_GetResult_Request>::value &&
    has_fixed_size<input_interfaces::action::UserInput_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<input_interfaces::action::UserInput_GetResult_Request>::value &&
    has_bounded_size<input_interfaces::action::UserInput_GetResult_Response>::value
  >
{
};

template<>
struct is_service<input_interfaces::action::UserInput_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<input_interfaces::action::UserInput_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<input_interfaces::action::UserInput_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "input_interfaces/action/detail/user_input__traits.hpp"

namespace input_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const UserInput_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserInput_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserInput_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use input_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const input_interfaces::action::UserInput_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  input_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use input_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const input_interfaces::action::UserInput_FeedbackMessage & msg)
{
  return input_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<input_interfaces::action::UserInput_FeedbackMessage>()
{
  return "input_interfaces::action::UserInput_FeedbackMessage";
}

template<>
inline const char * name<input_interfaces::action::UserInput_FeedbackMessage>()
{
  return "input_interfaces/action/UserInput_FeedbackMessage";
}

template<>
struct has_fixed_size<input_interfaces::action::UserInput_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<input_interfaces::action::UserInput_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<input_interfaces::action::UserInput_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<input_interfaces::action::UserInput_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<input_interfaces::action::UserInput_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<input_interfaces::action::UserInput>
  : std::true_type
{
};

template<>
struct is_action_goal<input_interfaces::action::UserInput_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<input_interfaces::action::UserInput_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<input_interfaces::action::UserInput_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__TRAITS_HPP_
