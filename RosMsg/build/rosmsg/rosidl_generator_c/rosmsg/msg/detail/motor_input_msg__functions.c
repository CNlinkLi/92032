// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice
#include "rosmsg/msg/detail/motor_input_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rosmsg__msg__MotorInputMsg__init(rosmsg__msg__MotorInputMsg * msg)
{
  if (!msg) {
    return false;
  }
  // tgt_pos
  // tgt_torq
  // tgt_speed
  // tgt_kd
  // tgt_kp
  return true;
}

void
rosmsg__msg__MotorInputMsg__fini(rosmsg__msg__MotorInputMsg * msg)
{
  if (!msg) {
    return;
  }
  // tgt_pos
  // tgt_torq
  // tgt_speed
  // tgt_kd
  // tgt_kp
}

bool
rosmsg__msg__MotorInputMsg__are_equal(const rosmsg__msg__MotorInputMsg * lhs, const rosmsg__msg__MotorInputMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tgt_pos
  if (lhs->tgt_pos != rhs->tgt_pos) {
    return false;
  }
  // tgt_torq
  if (lhs->tgt_torq != rhs->tgt_torq) {
    return false;
  }
  // tgt_speed
  if (lhs->tgt_speed != rhs->tgt_speed) {
    return false;
  }
  // tgt_kd
  if (lhs->tgt_kd != rhs->tgt_kd) {
    return false;
  }
  // tgt_kp
  if (lhs->tgt_kp != rhs->tgt_kp) {
    return false;
  }
  return true;
}

bool
rosmsg__msg__MotorInputMsg__copy(
  const rosmsg__msg__MotorInputMsg * input,
  rosmsg__msg__MotorInputMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // tgt_pos
  output->tgt_pos = input->tgt_pos;
  // tgt_torq
  output->tgt_torq = input->tgt_torq;
  // tgt_speed
  output->tgt_speed = input->tgt_speed;
  // tgt_kd
  output->tgt_kd = input->tgt_kd;
  // tgt_kp
  output->tgt_kp = input->tgt_kp;
  return true;
}

rosmsg__msg__MotorInputMsg *
rosmsg__msg__MotorInputMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__MotorInputMsg * msg = (rosmsg__msg__MotorInputMsg *)allocator.allocate(sizeof(rosmsg__msg__MotorInputMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosmsg__msg__MotorInputMsg));
  bool success = rosmsg__msg__MotorInputMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosmsg__msg__MotorInputMsg__destroy(rosmsg__msg__MotorInputMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosmsg__msg__MotorInputMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosmsg__msg__MotorInputMsg__Sequence__init(rosmsg__msg__MotorInputMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__MotorInputMsg * data = NULL;

  if (size) {
    data = (rosmsg__msg__MotorInputMsg *)allocator.zero_allocate(size, sizeof(rosmsg__msg__MotorInputMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosmsg__msg__MotorInputMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosmsg__msg__MotorInputMsg__fini(&data[i - 1]);
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
rosmsg__msg__MotorInputMsg__Sequence__fini(rosmsg__msg__MotorInputMsg__Sequence * array)
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
      rosmsg__msg__MotorInputMsg__fini(&array->data[i]);
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

rosmsg__msg__MotorInputMsg__Sequence *
rosmsg__msg__MotorInputMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__MotorInputMsg__Sequence * array = (rosmsg__msg__MotorInputMsg__Sequence *)allocator.allocate(sizeof(rosmsg__msg__MotorInputMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosmsg__msg__MotorInputMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosmsg__msg__MotorInputMsg__Sequence__destroy(rosmsg__msg__MotorInputMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosmsg__msg__MotorInputMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosmsg__msg__MotorInputMsg__Sequence__are_equal(const rosmsg__msg__MotorInputMsg__Sequence * lhs, const rosmsg__msg__MotorInputMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosmsg__msg__MotorInputMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosmsg__msg__MotorInputMsg__Sequence__copy(
  const rosmsg__msg__MotorInputMsg__Sequence * input,
  rosmsg__msg__MotorInputMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosmsg__msg__MotorInputMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosmsg__msg__MotorInputMsg * data =
      (rosmsg__msg__MotorInputMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosmsg__msg__MotorInputMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosmsg__msg__MotorInputMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosmsg__msg__MotorInputMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
