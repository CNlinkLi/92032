// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosmsg:msg/MotorOutputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_output_msg.h"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__STRUCT_H_
#define ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorOutputMsg in the package rosmsg.
typedef struct rosmsg__msg__MotorOutputMsg
{
  float curr_pos;
  float curr_torq;
  float curr_speed;
  float curr_kp;
  float curr_kd;
} rosmsg__msg__MotorOutputMsg;

// Struct for a sequence of rosmsg__msg__MotorOutputMsg.
typedef struct rosmsg__msg__MotorOutputMsg__Sequence
{
  rosmsg__msg__MotorOutputMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosmsg__msg__MotorOutputMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__STRUCT_H_
