// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice
#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosmsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosmsg/msg/detail/ros_can_motor_tgt__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_serialize_rosmsg__msg__RosCanMotorTgt(
  const rosmsg__msg__RosCanMotorTgt * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_deserialize_rosmsg__msg__RosCanMotorTgt(
  eprosima::fastcdr::Cdr &,
  rosmsg__msg__RosCanMotorTgt * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t get_serialized_size_rosmsg__msg__RosCanMotorTgt(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t max_serialized_size_rosmsg__msg__RosCanMotorTgt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_serialize_key_rosmsg__msg__RosCanMotorTgt(
  const rosmsg__msg__RosCanMotorTgt * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t get_serialized_size_key_rosmsg__msg__RosCanMotorTgt(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t max_serialized_size_key_rosmsg__msg__RosCanMotorTgt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosmsg, msg, RosCanMotorTgt)();

#ifdef __cplusplus
}
#endif

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
