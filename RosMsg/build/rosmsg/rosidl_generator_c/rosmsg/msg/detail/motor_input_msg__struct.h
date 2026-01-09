// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_input_msg.h"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__STRUCT_H_
#define ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorInputMsg in the package rosmsg.
typedef struct rosmsg__msg__MotorInputMsg
{
  float tgt_pos;
  float tgt_torq;
  float tgt_speed;
  float tgt_kd;
  float tgt_kp;
} rosmsg__msg__MotorInputMsg;

// Struct for a sequence of rosmsg__msg__MotorInputMsg.
typedef struct rosmsg__msg__MotorInputMsg__Sequence
{
  rosmsg__msg__MotorInputMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosmsg__msg__MotorInputMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__STRUCT_H_
