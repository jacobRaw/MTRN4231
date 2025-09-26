// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from input_interfaces:action/UserInput.idl
// generated code does not contain a copyright notice

#ifndef INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__FUNCTIONS_H_
#define INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "input_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "input_interfaces/action/detail/user_input__struct.h"

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_Goal
 * )) before or use
 * input_interfaces__action__UserInput_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Goal__init(input_interfaces__action__UserInput_Goal * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Goal__fini(input_interfaces__action__UserInput_Goal * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_Goal *
input_interfaces__action__UserInput_Goal__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Goal__destroy(input_interfaces__action__UserInput_Goal * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Goal__are_equal(const input_interfaces__action__UserInput_Goal * lhs, const input_interfaces__action__UserInput_Goal * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Goal__copy(
  const input_interfaces__action__UserInput_Goal * input,
  input_interfaces__action__UserInput_Goal * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Goal__Sequence__init(input_interfaces__action__UserInput_Goal__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Goal__Sequence__fini(input_interfaces__action__UserInput_Goal__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_Goal__Sequence *
input_interfaces__action__UserInput_Goal__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Goal__Sequence__destroy(input_interfaces__action__UserInput_Goal__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Goal__Sequence__are_equal(const input_interfaces__action__UserInput_Goal__Sequence * lhs, const input_interfaces__action__UserInput_Goal__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Goal__Sequence__copy(
  const input_interfaces__action__UserInput_Goal__Sequence * input,
  input_interfaces__action__UserInput_Goal__Sequence * output);

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_Result
 * )) before or use
 * input_interfaces__action__UserInput_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Result__init(input_interfaces__action__UserInput_Result * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Result__fini(input_interfaces__action__UserInput_Result * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_Result *
input_interfaces__action__UserInput_Result__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Result__destroy(input_interfaces__action__UserInput_Result * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Result__are_equal(const input_interfaces__action__UserInput_Result * lhs, const input_interfaces__action__UserInput_Result * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Result__copy(
  const input_interfaces__action__UserInput_Result * input,
  input_interfaces__action__UserInput_Result * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Result__Sequence__init(input_interfaces__action__UserInput_Result__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Result__Sequence__fini(input_interfaces__action__UserInput_Result__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_Result__Sequence *
input_interfaces__action__UserInput_Result__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Result__Sequence__destroy(input_interfaces__action__UserInput_Result__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Result__Sequence__are_equal(const input_interfaces__action__UserInput_Result__Sequence * lhs, const input_interfaces__action__UserInput_Result__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Result__Sequence__copy(
  const input_interfaces__action__UserInput_Result__Sequence * input,
  input_interfaces__action__UserInput_Result__Sequence * output);

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_Feedback
 * )) before or use
 * input_interfaces__action__UserInput_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Feedback__init(input_interfaces__action__UserInput_Feedback * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Feedback__fini(input_interfaces__action__UserInput_Feedback * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_Feedback *
input_interfaces__action__UserInput_Feedback__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Feedback__destroy(input_interfaces__action__UserInput_Feedback * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Feedback__are_equal(const input_interfaces__action__UserInput_Feedback * lhs, const input_interfaces__action__UserInput_Feedback * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Feedback__copy(
  const input_interfaces__action__UserInput_Feedback * input,
  input_interfaces__action__UserInput_Feedback * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Feedback__Sequence__init(input_interfaces__action__UserInput_Feedback__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Feedback__Sequence__fini(input_interfaces__action__UserInput_Feedback__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_Feedback__Sequence *
input_interfaces__action__UserInput_Feedback__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_Feedback__Sequence__destroy(input_interfaces__action__UserInput_Feedback__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Feedback__Sequence__are_equal(const input_interfaces__action__UserInput_Feedback__Sequence * lhs, const input_interfaces__action__UserInput_Feedback__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_Feedback__Sequence__copy(
  const input_interfaces__action__UserInput_Feedback__Sequence * input,
  input_interfaces__action__UserInput_Feedback__Sequence * output);

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_SendGoal_Request
 * )) before or use
 * input_interfaces__action__UserInput_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Request__init(input_interfaces__action__UserInput_SendGoal_Request * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Request__fini(input_interfaces__action__UserInput_SendGoal_Request * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_SendGoal_Request *
input_interfaces__action__UserInput_SendGoal_Request__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Request__destroy(input_interfaces__action__UserInput_SendGoal_Request * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Request__are_equal(const input_interfaces__action__UserInput_SendGoal_Request * lhs, const input_interfaces__action__UserInput_SendGoal_Request * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Request__copy(
  const input_interfaces__action__UserInput_SendGoal_Request * input,
  input_interfaces__action__UserInput_SendGoal_Request * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Request__Sequence__init(input_interfaces__action__UserInput_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Request__Sequence__fini(input_interfaces__action__UserInput_SendGoal_Request__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_SendGoal_Request__Sequence *
input_interfaces__action__UserInput_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Request__Sequence__destroy(input_interfaces__action__UserInput_SendGoal_Request__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Request__Sequence__are_equal(const input_interfaces__action__UserInput_SendGoal_Request__Sequence * lhs, const input_interfaces__action__UserInput_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Request__Sequence__copy(
  const input_interfaces__action__UserInput_SendGoal_Request__Sequence * input,
  input_interfaces__action__UserInput_SendGoal_Request__Sequence * output);

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_SendGoal_Response
 * )) before or use
 * input_interfaces__action__UserInput_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Response__init(input_interfaces__action__UserInput_SendGoal_Response * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Response__fini(input_interfaces__action__UserInput_SendGoal_Response * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_SendGoal_Response *
input_interfaces__action__UserInput_SendGoal_Response__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Response__destroy(input_interfaces__action__UserInput_SendGoal_Response * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Response__are_equal(const input_interfaces__action__UserInput_SendGoal_Response * lhs, const input_interfaces__action__UserInput_SendGoal_Response * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Response__copy(
  const input_interfaces__action__UserInput_SendGoal_Response * input,
  input_interfaces__action__UserInput_SendGoal_Response * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Response__Sequence__init(input_interfaces__action__UserInput_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Response__Sequence__fini(input_interfaces__action__UserInput_SendGoal_Response__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_SendGoal_Response__Sequence *
input_interfaces__action__UserInput_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_SendGoal_Response__Sequence__destroy(input_interfaces__action__UserInput_SendGoal_Response__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Response__Sequence__are_equal(const input_interfaces__action__UserInput_SendGoal_Response__Sequence * lhs, const input_interfaces__action__UserInput_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_SendGoal_Response__Sequence__copy(
  const input_interfaces__action__UserInput_SendGoal_Response__Sequence * input,
  input_interfaces__action__UserInput_SendGoal_Response__Sequence * output);

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_GetResult_Request
 * )) before or use
 * input_interfaces__action__UserInput_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Request__init(input_interfaces__action__UserInput_GetResult_Request * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Request__fini(input_interfaces__action__UserInput_GetResult_Request * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_GetResult_Request *
input_interfaces__action__UserInput_GetResult_Request__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Request__destroy(input_interfaces__action__UserInput_GetResult_Request * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Request__are_equal(const input_interfaces__action__UserInput_GetResult_Request * lhs, const input_interfaces__action__UserInput_GetResult_Request * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Request__copy(
  const input_interfaces__action__UserInput_GetResult_Request * input,
  input_interfaces__action__UserInput_GetResult_Request * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Request__Sequence__init(input_interfaces__action__UserInput_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Request__Sequence__fini(input_interfaces__action__UserInput_GetResult_Request__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_GetResult_Request__Sequence *
input_interfaces__action__UserInput_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Request__Sequence__destroy(input_interfaces__action__UserInput_GetResult_Request__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Request__Sequence__are_equal(const input_interfaces__action__UserInput_GetResult_Request__Sequence * lhs, const input_interfaces__action__UserInput_GetResult_Request__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Request__Sequence__copy(
  const input_interfaces__action__UserInput_GetResult_Request__Sequence * input,
  input_interfaces__action__UserInput_GetResult_Request__Sequence * output);

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_GetResult_Response
 * )) before or use
 * input_interfaces__action__UserInput_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Response__init(input_interfaces__action__UserInput_GetResult_Response * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Response__fini(input_interfaces__action__UserInput_GetResult_Response * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_GetResult_Response *
input_interfaces__action__UserInput_GetResult_Response__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Response__destroy(input_interfaces__action__UserInput_GetResult_Response * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Response__are_equal(const input_interfaces__action__UserInput_GetResult_Response * lhs, const input_interfaces__action__UserInput_GetResult_Response * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Response__copy(
  const input_interfaces__action__UserInput_GetResult_Response * input,
  input_interfaces__action__UserInput_GetResult_Response * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Response__Sequence__init(input_interfaces__action__UserInput_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Response__Sequence__fini(input_interfaces__action__UserInput_GetResult_Response__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_GetResult_Response__Sequence *
input_interfaces__action__UserInput_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_GetResult_Response__Sequence__destroy(input_interfaces__action__UserInput_GetResult_Response__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Response__Sequence__are_equal(const input_interfaces__action__UserInput_GetResult_Response__Sequence * lhs, const input_interfaces__action__UserInput_GetResult_Response__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_GetResult_Response__Sequence__copy(
  const input_interfaces__action__UserInput_GetResult_Response__Sequence * input,
  input_interfaces__action__UserInput_GetResult_Response__Sequence * output);

/// Initialize action/UserInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * input_interfaces__action__UserInput_FeedbackMessage
 * )) before or use
 * input_interfaces__action__UserInput_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_FeedbackMessage__init(input_interfaces__action__UserInput_FeedbackMessage * msg);

/// Finalize action/UserInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_FeedbackMessage__fini(input_interfaces__action__UserInput_FeedbackMessage * msg);

/// Create action/UserInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * input_interfaces__action__UserInput_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_FeedbackMessage *
input_interfaces__action__UserInput_FeedbackMessage__create();

/// Destroy action/UserInput message.
/**
 * It calls
 * input_interfaces__action__UserInput_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_FeedbackMessage__destroy(input_interfaces__action__UserInput_FeedbackMessage * msg);

/// Check for action/UserInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_FeedbackMessage__are_equal(const input_interfaces__action__UserInput_FeedbackMessage * lhs, const input_interfaces__action__UserInput_FeedbackMessage * rhs);

/// Copy a action/UserInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_FeedbackMessage__copy(
  const input_interfaces__action__UserInput_FeedbackMessage * input,
  input_interfaces__action__UserInput_FeedbackMessage * output);

/// Initialize array of action/UserInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * input_interfaces__action__UserInput_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_FeedbackMessage__Sequence__init(input_interfaces__action__UserInput_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_FeedbackMessage__Sequence__fini(input_interfaces__action__UserInput_FeedbackMessage__Sequence * array);

/// Create array of action/UserInput messages.
/**
 * It allocates the memory for the array and calls
 * input_interfaces__action__UserInput_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
input_interfaces__action__UserInput_FeedbackMessage__Sequence *
input_interfaces__action__UserInput_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/UserInput messages.
/**
 * It calls
 * input_interfaces__action__UserInput_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
void
input_interfaces__action__UserInput_FeedbackMessage__Sequence__destroy(input_interfaces__action__UserInput_FeedbackMessage__Sequence * array);

/// Check for action/UserInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_FeedbackMessage__Sequence__are_equal(const input_interfaces__action__UserInput_FeedbackMessage__Sequence * lhs, const input_interfaces__action__UserInput_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/UserInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_input_interfaces
bool
input_interfaces__action__UserInput_FeedbackMessage__Sequence__copy(
  const input_interfaces__action__UserInput_FeedbackMessage__Sequence * input,
  input_interfaces__action__UserInput_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INPUT_INTERFACES__ACTION__DETAIL__USER_INPUT__FUNCTIONS_H_
