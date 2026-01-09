// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_imu_msg.h"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__STRUCT_H_
#define ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RosCanImuMsg in the package rosmsg.
typedef struct rosmsg__msg__RosCanImuMsg
{
  float qurd_x;
  float qurd_y;
  float qurd_z;
  float qurd_w;
  float gravity_x;
  float gravity_y;
  float gravity_z;
  float ang_roll;
  float ang_yaw;
  float ang_pitch;
} rosmsg__msg__RosCanImuMsg;

// Struct for a sequence of rosmsg__msg__RosCanImuMsg.
typedef struct rosmsg__msg__RosCanImuMsg__Sequence
{
  rosmsg__msg__RosCanImuMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosmsg__msg__RosCanImuMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__STRUCT_H_
