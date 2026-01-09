// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosmsg:msg/MotorOutputMsg.idl
// generated code does not contain a copyright notice
#include "rosmsg/msg/detail/motor_output_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rosmsg__msg__MotorOutputMsg__init(rosmsg__msg__MotorOutputMsg * msg)
{
  if (!msg) {
    return false;
  }
  // curr_pos
  // curr_torq
  // curr_speed
  // curr_kp
  // curr_kd
  return true;
}

void
rosmsg__msg__MotorOutputMsg__fini(rosmsg__msg__MotorOutputMsg * msg)
{
  if (!msg) {
    return;
  }
  // curr_pos
  // curr_torq
  // curr_speed
  // curr_kp
  // curr_kd
}

bool
rosmsg__msg__MotorOutputMsg__are_equal(const rosmsg__msg__MotorOutputMsg * lhs, const rosmsg__msg__MotorOutputMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // curr_pos
  if (lhs->curr_pos != rhs->curr_pos) {
    return false;
  }
  // curr_torq
  if (lhs->curr_torq != rhs->curr_torq) {
    return false;
  }
  // curr_speed
  if (lhs->curr_speed != rhs->curr_speed) {
    return false;
  }
  // curr_kp
  if (lhs->curr_kp != rhs->curr_kp) {
    return false;
  }
  // curr_kd
  if (lhs->curr_kd != rhs->curr_kd) {
    return false;
  }
  return true;
}

bool
rosmsg__msg__MotorOutputMsg__copy(
  const rosmsg__msg__MotorOutputMsg * input,
  rosmsg__msg__MotorOutputMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // curr_pos
  output->curr_pos = input->curr_pos;
  // curr_torq
  output->curr_torq = input->curr_torq;
  // curr_speed
  output->curr_speed = input->curr_speed;
  // curr_kp
  output->curr_kp = input->curr_kp;
  // curr_kd
  output->curr_kd = input->curr_kd;
  return true;
}

rosmsg__msg__MotorOutputMsg *
rosmsg__msg__MotorOutputMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__MotorOutputMsg * msg = (rosmsg__msg__MotorOutputMsg *)allocator.allocate(sizeof(rosmsg__msg__MotorOutputMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosmsg__msg__MotorOutputMsg));
  bool success = rosmsg__msg__MotorOutputMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosmsg__msg__MotorOutputMsg__destroy(rosmsg__msg__MotorOutputMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosmsg__msg__MotorOutputMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosmsg__msg__MotorOutputMsg__Sequence__init(rosmsg__msg__MotorOutputMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__MotorOutputMsg * data = NULL;

  if (size) {
    data = (rosmsg__msg__MotorOutputMsg *)allocator.zero_allocate(size, sizeof(rosmsg__msg__MotorOutputMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosmsg__msg__MotorOutputMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosmsg__msg__MotorOutputMsg__fini(&data[i - 1]);
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
rosmsg__msg__MotorOutputMsg__Sequence__fini(rosmsg__msg__MotorOutputMsg__Sequence * array)
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
      rosmsg__msg__MotorOutputMsg__fini(&array->data[i]);
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

rosmsg__msg__MotorOutputMsg__Sequence *
rosmsg__msg__MotorOutputMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__MotorOutputMsg__Sequence * array = (rosmsg__msg__MotorOutputMsg__Sequence *)allocator.allocate(sizeof(rosmsg__msg__MotorOutputMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosmsg__msg__MotorOutputMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosmsg__msg__MotorOutputMsg__Sequence__destroy(rosmsg__msg__MotorOutputMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosmsg__msg__MotorOutputMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosmsg__msg__MotorOutputMsg__Sequence__are_equal(const rosmsg__msg__MotorOutputMsg__Sequence * lhs, const rosmsg__msg__MotorOutputMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosmsg__msg__MotorOutputMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosmsg__msg__MotorOutputMsg__Sequence__copy(
  const rosmsg__msg__MotorOutputMsg__Sequence * input,
  rosmsg__msg__MotorOutputMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosmsg__msg__MotorOutputMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosmsg__msg__MotorOutputMsg * data =
      (rosmsg__msg__MotorOutputMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosmsg__msg__MotorOutputMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosmsg__msg__MotorOutputMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosmsg__msg__MotorOutputMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
