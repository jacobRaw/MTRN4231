// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/Posestamped.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__POSESTAMPED__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__POSESTAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'time'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Posestamped in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__Posestamped
{
  geometry_msgs__msg__Point center;
  std_msgs__msg__Header time;
} tutorial_interfaces__msg__Posestamped;

// Struct for a sequence of tutorial_interfaces__msg__Posestamped.
typedef struct tutorial_interfaces__msg__Posestamped__Sequence
{
  tutorial_interfaces__msg__Posestamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__Posestamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__POSESTAMPED__STRUCT_H_
