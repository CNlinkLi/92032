// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice
#include "rosmsg/msg/detail/ros_can_motor_tgt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor`
#include "rosmsg/msg/detail/motor_input_msg__functions.h"

bool
rosmsg__msg__RosCanMotorTgt__init(rosmsg__msg__RosCanMotorTgt * msg)
{
  if (!msg) {
    return false;
  }
  // motor
  for (size_t i = 0; i < 2; ++i) {
    if (!rosmsg__msg__MotorInputMsg__init(&msg->motor[i])) {
      rosmsg__msg__RosCanMotorTgt__fini(msg);
      return false;
    }
  }
  return true;
}

void
rosmsg__msg__RosCanMotorTgt__fini(rosmsg__msg__RosCanMotorTgt * msg)
{
  if (!msg) {
    return;
  }
  // motor
  for (size_t i = 0; i < 2; ++i) {
    rosmsg__msg__MotorInputMsg__fini(&msg->motor[i]);
  }
}

bool
rosmsg__msg__RosCanMotorTgt__are_equal(const rosmsg__msg__RosCanMotorTgt * lhs, const rosmsg__msg__RosCanMotorTgt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor
  for (size_t i = 0; i < 2; ++i) {
    if (!rosmsg__msg__MotorInputMsg__are_equal(
        &(lhs->motor[i]), &(rhs->motor[i])))
    {
      return false;
    }
  }
  return true;
}

bool
rosmsg__msg__RosCanMotorTgt__copy(
  const rosmsg__msg__RosCanMotorTgt * input,
  rosmsg__msg__RosCanMotorTgt * output)
{
  if (!input || !output) {
    return false;
  }
  // motor
  for (size_t i = 0; i < 2; ++i) {
    if (!rosmsg__msg__MotorInputMsg__copy(
        &(input->motor[i]), &(output->motor[i])))
    {
      return false;
    }
  }
  return true;
}

rosmsg__msg__RosCanMotorTgt *
rosmsg__msg__RosCanMotorTgt__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__RosCanMotorTgt * msg = (rosmsg__msg__RosCanMotorTgt *)allocator.allocate(sizeof(rosmsg__msg__RosCanMotorTgt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosmsg__msg__RosCanMotorTgt));
  bool success = rosmsg__msg__RosCanMotorTgt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosmsg__msg__RosCanMotorTgt__destroy(rosmsg__msg__RosCanMotorTgt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosmsg__msg__RosCanMotorTgt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosmsg__msg__RosCanMotorTgt__Sequence__init(rosmsg__msg__RosCanMotorTgt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__RosCanMotorTgt * data = NULL;

  if (size) {
    data = (rosmsg__msg__RosCanMotorTgt *)allocator.zero_allocate(size, sizeof(rosmsg__msg__RosCanMotorTgt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosmsg__msg__RosCanMotorTgt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosmsg__msg__RosCanMotorTgt__fini(&data[i - 1]);
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
rosmsg__msg__RosCanMotorTgt__Sequence__fini(rosmsg__msg__RosCanMotorTgt__Sequence * array)
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
      rosmsg__msg__RosCanMotorTgt__fini(&array->data[i]);
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

rosmsg__msg__RosCanMotorTgt__Sequence *
rosmsg__msg__RosCanMotorTgt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__RosCanMotorTgt__Sequence * array = (rosmsg__msg__RosCanMotorTgt__Sequence *)allocator.allocate(sizeof(rosmsg__msg__RosCanMotorTgt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosmsg__msg__RosCanMotorTgt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosmsg__msg__RosCanMotorTgt__Sequence__destroy(rosmsg__msg__RosCanMotorTgt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosmsg__msg__RosCanMotorTgt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosmsg__msg__RosCanMotorTgt__Sequence__are_equal(const rosmsg__msg__RosCanMotorTgt__Sequence * lhs, const rosmsg__msg__RosCanMotorTgt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosmsg__msg__RosCanMotorTgt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosmsg__msg__RosCanMotorTgt__Sequence__copy(
  const rosmsg__msg__RosCanMotorTgt__Sequence * input,
  rosmsg__msg__RosCanMotorTgt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosmsg__msg__RosCanMotorTgt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosmsg__msg__RosCanMotorTgt * data =
      (rosmsg__msg__RosCanMotorTgt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosmsg__msg__RosCanMotorTgt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosmsg__msg__RosCanMotorTgt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosmsg__msg__RosCanMotorTgt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
