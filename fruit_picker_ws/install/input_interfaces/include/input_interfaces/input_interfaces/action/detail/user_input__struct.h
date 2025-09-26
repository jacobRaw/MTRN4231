// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from input_interfaces:action/UserInput.idl
// generated code does not contain a copyright notice

#ifndef INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__STRUCT_H_
#define INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'parameters'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_Goal
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String parameters;
} input_interfaces__action__UserInput_Goal;

// Struct for a sequence of input_interfaces__action__UserInput_Goal.
typedef struct input_interfaces__action__UserInput_Goal__Sequence
{
  input_interfaces__action__UserInput_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_Result
{
  int32_t progress;
  rosidl_runtime_c__String state_msg;
  bool success;
} input_interfaces__action__UserInput_Result;

// Struct for a sequence of input_interfaces__action__UserInput_Result.
typedef struct input_interfaces__action__UserInput_Result__Sequence
{
  input_interfaces__action__UserInput_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_Feedback
{
  rosidl_runtime_c__String state_msg;
  int32_t progress;
} input_interfaces__action__UserInput_Feedback;

// Struct for a sequence of input_interfaces__action__UserInput_Feedback.
typedef struct input_interfaces__action__UserInput_Feedback__Sequence
{
  input_interfaces__action__UserInput_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "input_interfaces/action/detail/user_input__struct.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  input_interfaces__action__UserInput_Goal goal;
} input_interfaces__action__UserInput_SendGoal_Request;

// Struct for a sequence of input_interfaces__action__UserInput_SendGoal_Request.
typedef struct input_interfaces__action__UserInput_SendGoal_Request__Sequence
{
  input_interfaces__action__UserInput_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} input_interfaces__action__UserInput_SendGoal_Response;

// Struct for a sequence of input_interfaces__action__UserInput_SendGoal_Response.
typedef struct input_interfaces__action__UserInput_SendGoal_Response__Sequence
{
  input_interfaces__action__UserInput_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} input_interfaces__action__UserInput_GetResult_Request;

// Struct for a sequence of input_interfaces__action__UserInput_GetResult_Request.
typedef struct input_interfaces__action__UserInput_GetResult_Request__Sequence
{
  input_interfaces__action__UserInput_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_GetResult_Response
{
  int8_t status;
  input_interfaces__action__UserInput_Result result;
} input_interfaces__action__UserInput_GetResult_Response;

// Struct for a sequence of input_interfaces__action__UserInput_GetResult_Response.
typedef struct input_interfaces__action__UserInput_GetResult_Response__Sequence
{
  input_interfaces__action__UserInput_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "input_interfaces/action/detail/user_input__struct.h"

/// Struct defined in action/UserInput in the package input_interfaces.
typedef struct input_interfaces__action__UserInput_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  input_interfaces__action__UserInput_Feedback feedback;
} input_interfaces__action__UserInput_FeedbackMessage;

// Struct for a sequence of input_interfaces__action__UserInput_FeedbackMessage.
typedef struct input_interfaces__action__UserInput_FeedbackMessage__Sequence
{
  input_interfaces__action__UserInput_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} input_interfaces__action__UserInput_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__STRUCT_H_
