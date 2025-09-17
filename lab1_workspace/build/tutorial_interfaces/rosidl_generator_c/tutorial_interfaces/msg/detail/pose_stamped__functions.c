// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:msg/PoseStamped.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/msg/detail/pose_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos3d`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `time`
#include "std_msgs/msg/detail/header__functions.h"

bool
tutorial_interfaces__msg__PoseStamped__init(tutorial_interfaces__msg__PoseStamped * msg)
{
  if (!msg) {
    return false;
  }
  // pos3d
  if (!geometry_msgs__msg__Quaternion__init(&msg->pos3d)) {
    tutorial_interfaces__msg__PoseStamped__fini(msg);
    return false;
  }
  // time
  if (!std_msgs__msg__Header__init(&msg->time)) {
    tutorial_interfaces__msg__PoseStamped__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__msg__PoseStamped__fini(tutorial_interfaces__msg__PoseStamped * msg)
{
  if (!msg) {
    return;
  }
  // pos3d
  geometry_msgs__msg__Quaternion__fini(&msg->pos3d);
  // time
  std_msgs__msg__Header__fini(&msg->time);
}

bool
tutorial_interfaces__msg__PoseStamped__are_equal(const tutorial_interfaces__msg__PoseStamped * lhs, const tutorial_interfaces__msg__PoseStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos3d
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->pos3d), &(rhs->pos3d)))
  {
    return false;
  }
  // time
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__msg__PoseStamped__copy(
  const tutorial_interfaces__msg__PoseStamped * input,
  tutorial_interfaces__msg__PoseStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // pos3d
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->pos3d), &(output->pos3d)))
  {
    return false;
  }
  // time
  if (!std_msgs__msg__Header__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__msg__PoseStamped *
tutorial_interfaces__msg__PoseStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__PoseStamped * msg = (tutorial_interfaces__msg__PoseStamped *)allocator.allocate(sizeof(tutorial_interfaces__msg__PoseStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__msg__PoseStamped));
  bool success = tutorial_interfaces__msg__PoseStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__msg__PoseStamped__destroy(tutorial_interfaces__msg__PoseStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__msg__PoseStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__msg__PoseStamped__Sequence__init(tutorial_interfaces__msg__PoseStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__PoseStamped * data = NULL;

  if (size) {
    data = (tutorial_interfaces__msg__PoseStamped *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__msg__PoseStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__msg__PoseStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__msg__PoseStamped__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__msg__PoseStamped__Sequence__fini(tutorial_interfaces__msg__PoseStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__msg__PoseStamped__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__msg__PoseStamped__Sequence *
tutorial_interfaces__msg__PoseStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__PoseStamped__Sequence * array = (tutorial_interfaces__msg__PoseStamped__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__msg__PoseStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__msg__PoseStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__msg__PoseStamped__Sequence__destroy(tutorial_interfaces__msg__PoseStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__msg__PoseStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__msg__PoseStamped__Sequence__are_equal(const tutorial_interfaces__msg__PoseStamped__Sequence * lhs, const tutorial_interfaces__msg__PoseStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__msg__PoseStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__msg__PoseStamped__Sequence__copy(
  const tutorial_interfaces__msg__PoseStamped__Sequence * input,
  tutorial_interfaces__msg__PoseStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__msg__PoseStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__msg__PoseStamped * data =
      (tutorial_interfaces__msg__PoseStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__msg__PoseStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__msg__PoseStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__msg__PoseStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
