// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosmsg:msg/RosCanMotorSta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_motor_sta.h"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__STRUCT_H_
#define ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'motor'
#include "rosmsg/msg/detail/motor_output_msg__struct.h"

/// Struct defined in msg/RosCanMotorSta in the package rosmsg.
typedef struct rosmsg__msg__RosCanMotorSta
{
  rosmsg__msg__MotorOutputMsg motor[2];
} rosmsg__msg__RosCanMotorSta;

// Struct for a sequence of rosmsg__msg__RosCanMotorSta.
typedef struct rosmsg__msg__RosCanMotorSta__Sequence
{
  rosmsg__msg__RosCanMotorSta * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosmsg__msg__RosCanMotorSta__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__STRUCT_H_
