// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice
#include "rosmsg/msg/detail/ros_can_imu_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rosmsg__msg__RosCanImuMsg__init(rosmsg__msg__RosCanImuMsg * msg)
{
  if (!msg) {
    return false;
  }
  // qurd_x
  // qurd_y
  // qurd_z
  // qurd_w
  // gravity_x
  // gravity_y
  // gravity_z
  // ang_roll
  // ang_yaw
  // ang_pitch
  return true;
}

void
rosmsg__msg__RosCanImuMsg__fini(rosmsg__msg__RosCanImuMsg * msg)
{
  if (!msg) {
    return;
  }
  // qurd_x
  // qurd_y
  // qurd_z
  // qurd_w
  // gravity_x
  // gravity_y
  // gravity_z
  // ang_roll
  // ang_yaw
  // ang_pitch
}

bool
rosmsg__msg__RosCanImuMsg__are_equal(const rosmsg__msg__RosCanImuMsg * lhs, const rosmsg__msg__RosCanImuMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // qurd_x
  if (lhs->qurd_x != rhs->qurd_x) {
    return false;
  }
  // qurd_y
  if (lhs->qurd_y != rhs->qurd_y) {
    return false;
  }
  // qurd_z
  if (lhs->qurd_z != rhs->qurd_z) {
    return false;
  }
  // qurd_w
  if (lhs->qurd_w != rhs->qurd_w) {
    return false;
  }
  // gravity_x
  if (lhs->gravity_x != rhs->gravity_x) {
    return false;
  }
  // gravity_y
  if (lhs->gravity_y != rhs->gravity_y) {
    return false;
  }
  // gravity_z
  if (lhs->gravity_z != rhs->gravity_z) {
    return false;
  }
  // ang_roll
  if (lhs->ang_roll != rhs->ang_roll) {
    return false;
  }
  // ang_yaw
  if (lhs->ang_yaw != rhs->ang_yaw) {
    return false;
  }
  // ang_pitch
  if (lhs->ang_pitch != rhs->ang_pitch) {
    return false;
  }
  return true;
}

bool
rosmsg__msg__RosCanImuMsg__copy(
  const rosmsg__msg__RosCanImuMsg * input,
  rosmsg__msg__RosCanImuMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // qurd_x
  output->qurd_x = input->qurd_x;
  // qurd_y
  output->qurd_y = input->qurd_y;
  // qurd_z
  output->qurd_z = input->qurd_z;
  // qurd_w
  output->qurd_w = input->qurd_w;
  // gravity_x
  output->gravity_x = input->gravity_x;
  // gravity_y
  output->gravity_y = input->gravity_y;
  // gravity_z
  output->gravity_z = input->gravity_z;
  // ang_roll
  output->ang_roll = input->ang_roll;
  // ang_yaw
  output->ang_yaw = input->ang_yaw;
  // ang_pitch
  output->ang_pitch = input->ang_pitch;
  return true;
}

rosmsg__msg__RosCanImuMsg *
rosmsg__msg__RosCanImuMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__RosCanImuMsg * msg = (rosmsg__msg__RosCanImuMsg *)allocator.allocate(sizeof(rosmsg__msg__RosCanImuMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosmsg__msg__RosCanImuMsg));
  bool success = rosmsg__msg__RosCanImuMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosmsg__msg__RosCanImuMsg__destroy(rosmsg__msg__RosCanImuMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosmsg__msg__RosCanImuMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosmsg__msg__RosCanImuMsg__Sequence__init(rosmsg__msg__RosCanImuMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__RosCanImuMsg * data = NULL;

  if (size) {
    data = (rosmsg__msg__RosCanImuMsg *)allocator.zero_allocate(size, sizeof(rosmsg__msg__RosCanImuMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosmsg__msg__RosCanImuMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosmsg__msg__RosCanImuMsg__fini(&data[i - 1]);
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
rosmsg__msg__RosCanImuMsg__Sequence__fini(rosmsg__msg__RosCanImuMsg__Sequence * array)
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
      rosmsg__msg__RosCanImuMsg__fini(&array->data[i]);
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

rosmsg__msg__RosCanImuMsg__Sequence *
rosmsg__msg__RosCanImuMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmsg__msg__RosCanImuMsg__Sequence * array = (rosmsg__msg__RosCanImuMsg__Sequence *)allocator.allocate(sizeof(rosmsg__msg__RosCanImuMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosmsg__msg__RosCanImuMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosmsg__msg__RosCanImuMsg__Sequence__destroy(rosmsg__msg__RosCanImuMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosmsg__msg__RosCanImuMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosmsg__msg__RosCanImuMsg__Sequence__are_equal(const rosmsg__msg__RosCanImuMsg__Sequence * lhs, const rosmsg__msg__RosCanImuMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosmsg__msg__RosCanImuMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosmsg__msg__RosCanImuMsg__Sequence__copy(
  const rosmsg__msg__RosCanImuMsg__Sequence * input,
  rosmsg__msg__RosCanImuMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosmsg__msg__RosCanImuMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosmsg__msg__RosCanImuMsg * data =
      (rosmsg__msg__RosCanImuMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosmsg__msg__RosCanImuMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosmsg__msg__RosCanImuMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosmsg__msg__RosCanImuMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
