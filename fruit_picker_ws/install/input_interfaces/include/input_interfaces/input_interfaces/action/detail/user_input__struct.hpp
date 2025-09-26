// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from input_interfaces:action/UserInput.idl
// generated code does not contain a copyright notice

#ifndef INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__STRUCT_HPP_
#define INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_Goal __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_Goal __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_Goal_
{
  using Type = UserInput_Goal_<ContainerAllocator>;

  explicit UserInput_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->parameters = "";
    }
  }

  explicit UserInput_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    parameters(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->parameters = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _parameters_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_Goal
    std::shared_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_Goal
    std::shared_ptr<input_interfaces::action::UserInput_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_Goal_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_Goal_

// alias to use template instance with default allocator
using UserInput_Goal =
  input_interfaces::action::UserInput_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces


#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_Result __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_Result __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_Result_
{
  using Type = UserInput_Result_<ContainerAllocator>;

  explicit UserInput_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0l;
      this->state_msg = "";
      this->success = false;
    }
  }

  explicit UserInput_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0l;
      this->state_msg = "";
      this->success = false;
    }
  }

  // field types and members
  using _progress_type =
    int32_t;
  _progress_type progress;
  using _state_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_msg_type state_msg;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__progress(
    const int32_t & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__state_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_msg = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_Result
    std::shared_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_Result
    std::shared_ptr<input_interfaces::action::UserInput_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_Result_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    if (this->state_msg != other.state_msg) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_Result_

// alias to use template instance with default allocator
using UserInput_Result =
  input_interfaces::action::UserInput_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces


#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_Feedback __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_Feedback_
{
  using Type = UserInput_Feedback_<ContainerAllocator>;

  explicit UserInput_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_msg = "";
      this->progress = 0l;
    }
  }

  explicit UserInput_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_msg = "";
      this->progress = 0l;
    }
  }

  // field types and members
  using _state_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_msg_type state_msg;
  using _progress_type =
    int32_t;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__state_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_msg = _arg;
    return *this;
  }
  Type & set__progress(
    const int32_t & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_Feedback
    std::shared_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_Feedback
    std::shared_ptr<input_interfaces::action::UserInput_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_Feedback_ & other) const
  {
    if (this->state_msg != other.state_msg) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_Feedback_

// alias to use template instance with default allocator
using UserInput_Feedback =
  input_interfaces::action::UserInput_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "input_interfaces/action/detail/user_input__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_SendGoal_Request __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_SendGoal_Request_
{
  using Type = UserInput_SendGoal_Request_<ContainerAllocator>;

  explicit UserInput_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit UserInput_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    input_interfaces::action::UserInput_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const input_interfaces::action::UserInput_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_SendGoal_Request
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_SendGoal_Request
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_SendGoal_Request_

// alias to use template instance with default allocator
using UserInput_SendGoal_Request =
  input_interfaces::action::UserInput_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_SendGoal_Response __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_SendGoal_Response_
{
  using Type = UserInput_SendGoal_Response_<ContainerAllocator>;

  explicit UserInput_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit UserInput_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_SendGoal_Response
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_SendGoal_Response
    std::shared_ptr<input_interfaces::action::UserInput_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_SendGoal_Response_

// alias to use template instance with default allocator
using UserInput_SendGoal_Response =
  input_interfaces::action::UserInput_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces

namespace input_interfaces
{

namespace action
{

struct UserInput_SendGoal
{
  using Request = input_interfaces::action::UserInput_SendGoal_Request;
  using Response = input_interfaces::action::UserInput_SendGoal_Response;
};

}  // namespace action

}  // namespace input_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_GetResult_Request __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_GetResult_Request_
{
  using Type = UserInput_GetResult_Request_<ContainerAllocator>;

  explicit UserInput_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit UserInput_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_GetResult_Request
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_GetResult_Request
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_GetResult_Request_

// alias to use template instance with default allocator
using UserInput_GetResult_Request =
  input_interfaces::action::UserInput_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "input_interfaces/action/detail/user_input__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_GetResult_Response __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_GetResult_Response_
{
  using Type = UserInput_GetResult_Response_<ContainerAllocator>;

  explicit UserInput_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit UserInput_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    input_interfaces::action::UserInput_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const input_interfaces::action::UserInput_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_GetResult_Response
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_GetResult_Response
    std::shared_ptr<input_interfaces::action::UserInput_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_GetResult_Response_

// alias to use template instance with default allocator
using UserInput_GetResult_Response =
  input_interfaces::action::UserInput_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces

namespace input_interfaces
{

namespace action
{

struct UserInput_GetResult
{
  using Request = input_interfaces::action::UserInput_GetResult_Request;
  using Response = input_interfaces::action::UserInput_GetResult_Response;
};

}  // namespace action

}  // namespace input_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "input_interfaces/action/detail/user_input__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__input_interfaces__action__UserInput_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__input_interfaces__action__UserInput_FeedbackMessage __declspec(deprecated)
#endif

namespace input_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct UserInput_FeedbackMessage_
{
  using Type = UserInput_FeedbackMessage_<ContainerAllocator>;

  explicit UserInput_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit UserInput_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    input_interfaces::action::UserInput_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const input_interfaces::action::UserInput_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__input_interfaces__action__UserInput_FeedbackMessage
    std::shared_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__input_interfaces__action__UserInput_FeedbackMessage
    std::shared_ptr<input_interfaces::action::UserInput_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInput_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInput_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInput_FeedbackMessage_

// alias to use template instance with default allocator
using UserInput_FeedbackMessage =
  input_interfaces::action::UserInput_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace input_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace input_interfaces
{

namespace action
{

struct UserInput
{
  /// The goal message defined in the action definition.
  using Goal = input_interfaces::action::UserInput_Goal;
  /// The result message defined in the action definition.
  using Result = input_interfaces::action::UserInput_Result;
  /// The feedback message defined in the action definition.
  using Feedback = input_interfaces::action::UserInput_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = input_interfaces::action::UserInput_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = input_interfaces::action::UserInput_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = input_interfaces::action::UserInput_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct UserInput UserInput;

}  // namespace action

}  // namespace input_interfaces

#endif  // INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__STRUCT_HPP_
