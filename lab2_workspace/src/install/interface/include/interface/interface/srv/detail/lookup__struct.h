// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:srv/Lookup.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_H_
#define INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_H_

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

/// Struct defined in srv/Lookup in the package interface.
typedef struct interface__srv__Lookup_Request
{
  rosidl_runtime_c__String toframe;
  rosidl_runtime_c__String fromframe;
} interface__srv__Lookup_Request;

// Struct for a sequence of interface__srv__Lookup_Request.
typedef struct interface__srv__Lookup_Request__Sequence
{
  interface__srv__Lookup_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Lookup_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/Lookup in the package interface.
typedef struct interface__srv__Lookup_Response
{
  geometry_msgs__msg__Pose pose;
} interface__srv__Lookup_Response;

// Struct for a sequence of interface__srv__Lookup_Response.
typedef struct interface__srv__Lookup_Response__Sequence
{
  interface__srv__Lookup_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Lookup_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__SRV__DETAIL__LOOKUP__STRUCT_H_
