// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/PoseStamped.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pos3d'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'time'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__msg__PoseStamped __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__PoseStamped __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseStamped_
{
  using Type = PoseStamped_<ContainerAllocator>;

  explicit PoseStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos3d(_init),
    time(_init)
  {
    (void)_init;
  }

  explicit PoseStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos3d(_alloc, _init),
    time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pos3d_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _pos3d_type pos3d;
  using _time_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _time_type time;

  // setters for named parameter idiom
  Type & set__pos3d(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->pos3d = _arg;
    return *this;
  }
  Type & set__time(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::PoseStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::PoseStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::PoseStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::PoseStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__PoseStamped
    std::shared_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__PoseStamped
    std::shared_ptr<tutorial_interfaces::msg::PoseStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseStamped_ & other) const
  {
    if (this->pos3d != other.pos3d) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseStamped_

// alias to use template instance with default allocator
using PoseStamped =
  tutorial_interfaces::msg::PoseStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__STRUCT_HPP_
