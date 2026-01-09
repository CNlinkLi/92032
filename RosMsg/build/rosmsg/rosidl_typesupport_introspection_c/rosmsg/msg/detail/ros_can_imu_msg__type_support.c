// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosmsg/msg/detail/ros_can_imu_msg__rosidl_typesupport_introspection_c.h"
#include "rosmsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosmsg/msg/detail/ros_can_imu_msg__functions.h"
#include "rosmsg/msg/detail/ros_can_imu_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosmsg__msg__RosCanImuMsg__init(message_memory);
}

void rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_fini_function(void * message_memory)
{
  rosmsg__msg__RosCanImuMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_member_array[10] = {
  {
    "qurd_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, qurd_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qurd_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, qurd_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qurd_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, qurd_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qurd_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, qurd_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, gravity_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, gravity_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, gravity_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, ang_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, ang_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanImuMsg, ang_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_members = {
  "rosmsg__msg",  // message namespace
  "RosCanImuMsg",  // message name
  10,  // number of fields
  sizeof(rosmsg__msg__RosCanImuMsg),
  false,  // has_any_key_member_
  rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_member_array,  // message members
  rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_type_support_handle = {
  0,
  &rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_members,
  get_message_typesupport_handle_function,
  &rosmsg__msg__RosCanImuMsg__get_type_hash,
  &rosmsg__msg__RosCanImuMsg__get_type_description,
  &rosmsg__msg__RosCanImuMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosmsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosmsg, msg, RosCanImuMsg)() {
  if (!rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_type_support_handle.typesupport_identifier) {
    rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosmsg__msg__RosCanImuMsg__rosidl_typesupport_introspection_c__RosCanImuMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
