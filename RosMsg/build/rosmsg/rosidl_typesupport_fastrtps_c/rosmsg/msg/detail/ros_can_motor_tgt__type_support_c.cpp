// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice
#include "rosmsg/msg/detail/ros_can_motor_tgt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosmsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosmsg/msg/detail/ros_can_motor_tgt__struct.h"
#include "rosmsg/msg/detail/ros_can_motor_tgt__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosmsg/msg/detail/motor_input_msg__functions.h"  // motor

// forward declare type support functions

bool cdr_serialize_rosmsg__msg__MotorInputMsg(
  const rosmsg__msg__MotorInputMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rosmsg__msg__MotorInputMsg(
  eprosima::fastcdr::Cdr & cdr,
  rosmsg__msg__MotorInputMsg * ros_message);

size_t get_serialized_size_rosmsg__msg__MotorInputMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rosmsg__msg__MotorInputMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rosmsg__msg__MotorInputMsg(
  const rosmsg__msg__MotorInputMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rosmsg__msg__MotorInputMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rosmsg__msg__MotorInputMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosmsg, msg, MotorInputMsg)();


using _RosCanMotorTgt__ros_msg_type = rosmsg__msg__RosCanMotorTgt;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_serialize_rosmsg__msg__RosCanMotorTgt(
  const rosmsg__msg__RosCanMotorTgt * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motor
  {
    size_t size = 2;
    auto array_ptr = ros_message->motor;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_rosmsg__msg__MotorInputMsg(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_deserialize_rosmsg__msg__RosCanMotorTgt(
  eprosima::fastcdr::Cdr & cdr,
  rosmsg__msg__RosCanMotorTgt * ros_message)
{
  // Field name: motor
  {
    size_t size = 2;
    auto array_ptr = ros_message->motor;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_rosmsg__msg__MotorInputMsg(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t get_serialized_size_rosmsg__msg__RosCanMotorTgt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosCanMotorTgt__ros_msg_type * ros_message = static_cast<const _RosCanMotorTgt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motor
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->motor;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rosmsg__msg__MotorInputMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t max_serialized_size_rosmsg__msg__RosCanMotorTgt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: motor
  {
    size_t array_size = 2;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rosmsg__msg__MotorInputMsg(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmsg__msg__RosCanMotorTgt;
    is_plain =
      (
      offsetof(DataType, motor) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_serialize_key_rosmsg__msg__RosCanMotorTgt(
  const rosmsg__msg__RosCanMotorTgt * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: motor
  {
    size_t size = 2;
    auto array_ptr = ros_message->motor;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_rosmsg__msg__MotorInputMsg(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t get_serialized_size_key_rosmsg__msg__RosCanMotorTgt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosCanMotorTgt__ros_msg_type * ros_message = static_cast<const _RosCanMotorTgt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: motor
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->motor;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_rosmsg__msg__MotorInputMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t max_serialized_size_key_rosmsg__msg__RosCanMotorTgt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: motor
  {
    size_t array_size = 2;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rosmsg__msg__MotorInputMsg(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmsg__msg__RosCanMotorTgt;
    is_plain =
      (
      offsetof(DataType, motor) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RosCanMotorTgt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rosmsg__msg__RosCanMotorTgt * ros_message = static_cast<const rosmsg__msg__RosCanMotorTgt *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rosmsg__msg__RosCanMotorTgt(ros_message, cdr);
}

static bool _RosCanMotorTgt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rosmsg__msg__RosCanMotorTgt * ros_message = static_cast<rosmsg__msg__RosCanMotorTgt *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rosmsg__msg__RosCanMotorTgt(cdr, ros_message);
}

static uint32_t _RosCanMotorTgt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosmsg__msg__RosCanMotorTgt(
      untyped_ros_message, 0));
}

static size_t _RosCanMotorTgt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosmsg__msg__RosCanMotorTgt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosCanMotorTgt = {
  "rosmsg::msg",
  "RosCanMotorTgt",
  _RosCanMotorTgt__cdr_serialize,
  _RosCanMotorTgt__cdr_deserialize,
  _RosCanMotorTgt__get_serialized_size,
  _RosCanMotorTgt__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RosCanMotorTgt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosCanMotorTgt,
  get_message_typesupport_handle_function,
  &rosmsg__msg__RosCanMotorTgt__get_type_hash,
  &rosmsg__msg__RosCanMotorTgt__get_type_description,
  &rosmsg__msg__RosCanMotorTgt__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosmsg, msg, RosCanMotorTgt)() {
  return &_RosCanMotorTgt__type_support;
}

#if defined(__cplusplus)
}
#endif
