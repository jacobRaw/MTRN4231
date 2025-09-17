// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/PoseStamped.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos3d'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'time'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PoseStamped in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__PoseStamped
{
  geometry_msgs__msg__Quaternion pos3d;
  std_msgs__msg__Header time;
} tutorial_interfaces__msg__PoseStamped;

// Struct for a sequence of tutorial_interfaces__msg__PoseStamped.
typedef struct tutorial_interfaces__msg__PoseStamped__Sequence
{
  tutorial_interfaces__msg__PoseStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__PoseStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POSE_STAMPED__STRUCT_H_
