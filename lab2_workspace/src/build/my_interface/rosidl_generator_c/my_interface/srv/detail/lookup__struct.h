// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interface:srv/Lookup.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_H_
#define MY_INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'toframe'
// Member 'fromframe'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Lookup in the package my_interface.
typedef struct my_interface__srv__Lookup_Request
{
  rosidl_runtime_c__String toframe;
  rosidl_runtime_c__String fromframe;
} my_interface__srv__Lookup_Request;

// Struct for a sequence of my_interface__srv__Lookup_Request.
typedef struct my_interface__srv__Lookup_Request__Sequence
{
  my_interface__srv__Lookup_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface__srv__Lookup_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/Lookup in the package my_interface.
typedef struct my_interface__srv__Lookup_Response
{
  geometry_msgs__msg__Pose pose;
} my_interface__srv__Lookup_Response;

// Struct for a sequence of my_interface__srv__Lookup_Response.
typedef struct my_interface__srv__Lookup_Response__Sequence
{
  my_interface__srv__Lookup_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface__srv__Lookup_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_H_
