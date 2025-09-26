// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from input_interfaces:action/UserInput.idl
// generated code does not contain a copyright notice

#ifndef INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__BUILDER_HPP_
#define INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "input_interfaces/action/detail/user_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_Goal_parameters
{
public:
  explicit Init_UserInput_Goal_parameters(::input_interfaces::action::UserInput_Goal & msg)
  : msg_(msg)
  {}
  ::input_interfaces::action::UserInput_Goal parameters(::input_interfaces::action::UserInput_Goal::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_Goal msg_;
};

class Init_UserInput_Goal_command
{
public:
  Init_UserInput_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_Goal_parameters command(::input_interfaces::action::UserInput_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_UserInput_Goal_parameters(msg_);
  }

private:
  ::input_interfaces::action::UserInput_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_Goal>()
{
  return input_interfaces::action::builder::Init_UserInput_Goal_command();
}

}  // namespace input_interfaces


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_Result_success
{
public:
  explicit Init_UserInput_Result_success(::input_interfaces::action::UserInput_Result & msg)
  : msg_(msg)
  {}
  ::input_interfaces::action::UserInput_Result success(::input_interfaces::action::UserInput_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_Result msg_;
};

class Init_UserInput_Result_state_msg
{
public:
  explicit Init_UserInput_Result_state_msg(::input_interfaces::action::UserInput_Result & msg)
  : msg_(msg)
  {}
  Init_UserInput_Result_success state_msg(::input_interfaces::action::UserInput_Result::_state_msg_type arg)
  {
    msg_.state_msg = std::move(arg);
    return Init_UserInput_Result_success(msg_);
  }

private:
  ::input_interfaces::action::UserInput_Result msg_;
};

class Init_UserInput_Result_progress
{
public:
  Init_UserInput_Result_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_Result_state_msg progress(::input_interfaces::action::UserInput_Result::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_UserInput_Result_state_msg(msg_);
  }

private:
  ::input_interfaces::action::UserInput_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_Result>()
{
  return input_interfaces::action::builder::Init_UserInput_Result_progress();
}

}  // namespace input_interfaces


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_Feedback_progress
{
public:
  explicit Init_UserInput_Feedback_progress(::input_interfaces::action::UserInput_Feedback & msg)
  : msg_(msg)
  {}
  ::input_interfaces::action::UserInput_Feedback progress(::input_interfaces::action::UserInput_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_Feedback msg_;
};

class Init_UserInput_Feedback_state_msg
{
public:
  Init_UserInput_Feedback_state_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_Feedback_progress state_msg(::input_interfaces::action::UserInput_Feedback::_state_msg_type arg)
  {
    msg_.state_msg = std::move(arg);
    return Init_UserInput_Feedback_progress(msg_);
  }

private:
  ::input_interfaces::action::UserInput_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_Feedback>()
{
  return input_interfaces::action::builder::Init_UserInput_Feedback_state_msg();
}

}  // namespace input_interfaces


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_SendGoal_Request_goal
{
public:
  explicit Init_UserInput_SendGoal_Request_goal(::input_interfaces::action::UserInput_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::input_interfaces::action::UserInput_SendGoal_Request goal(::input_interfaces::action::UserInput_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_SendGoal_Request msg_;
};

class Init_UserInput_SendGoal_Request_goal_id
{
public:
  Init_UserInput_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_SendGoal_Request_goal goal_id(::input_interfaces::action::UserInput_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_UserInput_SendGoal_Request_goal(msg_);
  }

private:
  ::input_interfaces::action::UserInput_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_SendGoal_Request>()
{
  return input_interfaces::action::builder::Init_UserInput_SendGoal_Request_goal_id();
}

}  // namespace input_interfaces


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_SendGoal_Response_stamp
{
public:
  explicit Init_UserInput_SendGoal_Response_stamp(::input_interfaces::action::UserInput_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::input_interfaces::action::UserInput_SendGoal_Response stamp(::input_interfaces::action::UserInput_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_SendGoal_Response msg_;
};

class Init_UserInput_SendGoal_Response_accepted
{
public:
  Init_UserInput_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_SendGoal_Response_stamp accepted(::input_interfaces::action::UserInput_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_UserInput_SendGoal_Response_stamp(msg_);
  }

private:
  ::input_interfaces::action::UserInput_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_SendGoal_Response>()
{
  return input_interfaces::action::builder::Init_UserInput_SendGoal_Response_accepted();
}

}  // namespace input_interfaces


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_GetResult_Request_goal_id
{
public:
  Init_UserInput_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::input_interfaces::action::UserInput_GetResult_Request goal_id(::input_interfaces::action::UserInput_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_GetResult_Request>()
{
  return input_interfaces::action::builder::Init_UserInput_GetResult_Request_goal_id();
}

}  // namespace input_interfaces


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_GetResult_Response_result
{
public:
  explicit Init_UserInput_GetResult_Response_result(::input_interfaces::action::UserInput_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::input_interfaces::action::UserInput_GetResult_Response result(::input_interfaces::action::UserInput_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_GetResult_Response msg_;
};

class Init_UserInput_GetResult_Response_status
{
public:
  Init_UserInput_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_GetResult_Response_result status(::input_interfaces::action::UserInput_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_UserInput_GetResult_Response_result(msg_);
  }

private:
  ::input_interfaces::action::UserInput_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_GetResult_Response>()
{
  return input_interfaces::action::builder::Init_UserInput_GetResult_Response_status();
}

}  // namespace input_interfaces


namespace input_interfaces
{

namespace action
{

namespace builder
{

class Init_UserInput_FeedbackMessage_feedback
{
public:
  explicit Init_UserInput_FeedbackMessage_feedback(::input_interfaces::action::UserInput_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::input_interfaces::action::UserInput_FeedbackMessage feedback(::input_interfaces::action::UserInput_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::input_interfaces::action::UserInput_FeedbackMessage msg_;
};

class Init_UserInput_FeedbackMessage_goal_id
{
public:
  Init_UserInput_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInput_FeedbackMessage_feedback goal_id(::input_interfaces::action::UserInput_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_UserInput_FeedbackMessage_feedback(msg_);
  }

private:
  ::input_interfaces::action::UserInput_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::input_interfaces::action::UserInput_FeedbackMessage>()
{
  return input_interfaces::action::builder::Init_UserInput_FeedbackMessage_goal_id();
}

}  // namespace input_interfaces

#endif  // INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__BUILDER_HPP_
