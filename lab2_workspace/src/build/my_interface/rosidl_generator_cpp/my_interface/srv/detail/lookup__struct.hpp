// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interface:srv/Lookup.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_HPP_
#define MY_INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interface__srv__Lookup_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interface__srv__Lookup_Request __declspec(deprecated)
#endif

namespace my_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Lookup_Request_
{
  using Type = Lookup_Request_<ContainerAllocator>;

  explicit Lookup_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->toframe = "";
      this->fromframe = "";
    }
  }

  explicit Lookup_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : toframe(_alloc),
    fromframe(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->toframe = "";
      this->fromframe = "";
    }
  }

  // field types and members
  using _toframe_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _toframe_type toframe;
  using _fromframe_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fromframe_type fromframe;

  // setters for named parameter idiom
  Type & set__toframe(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->toframe = _arg;
    return *this;
  }
  Type & set__fromframe(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fromframe = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interface::srv::Lookup_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interface::srv::Lookup_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Lookup_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Lookup_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interface__srv__Lookup_Request
    std::shared_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interface__srv__Lookup_Request
    std::shared_ptr<my_interface::srv::Lookup_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lookup_Request_ & other) const
  {
    if (this->toframe != other.toframe) {
      return false;
    }
    if (this->fromframe != other.fromframe) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lookup_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lookup_Request_

// alias to use template instance with default allocator
using Lookup_Request =
  my_interface::srv::Lookup_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interface


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interface__srv__Lookup_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interface__srv__Lookup_Response __declspec(deprecated)
#endif

namespace my_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Lookup_Response_
{
  using Type = Lookup_Response_<ContainerAllocator>;

  explicit Lookup_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit Lookup_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interface::srv::Lookup_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interface::srv::Lookup_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Lookup_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Lookup_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interface__srv__Lookup_Response
    std::shared_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interface__srv__Lookup_Response
    std::shared_ptr<my_interface::srv::Lookup_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lookup_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lookup_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lookup_Response_

// alias to use template instance with default allocator
using Lookup_Response =
  my_interface::srv::Lookup_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interface

namespace my_interface
{

namespace srv
{

struct Lookup
{
  using Request = my_interface::srv::Lookup_Request;
  using Response = my_interface::srv::Lookup_Response;
};

}  // namespace srv

}  // namespace my_interface

#endif  // MY_INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_HPP_
