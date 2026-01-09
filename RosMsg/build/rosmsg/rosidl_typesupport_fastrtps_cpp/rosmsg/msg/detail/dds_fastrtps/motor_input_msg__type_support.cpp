// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice
#include "rosmsg/msg/detail/motor_input_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosmsg/msg/detail/motor_input_msg__functions.h"
#include "rosmsg/msg/detail/motor_input_msg__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rosmsg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmsg
cdr_serialize(
  const rosmsg::msg::MotorInputMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tgt_pos
  cdr << ros_message.tgt_pos;

  // Member: tgt_torq
  cdr << ros_message.tgt_torq;

  // Member: tgt_speed
  cdr << ros_message.tgt_speed;

  // Member: tgt_kd
  cdr << ros_message.tgt_kd;

  // Member: tgt_kp
  cdr << ros_message.tgt_kp;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmsg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosmsg::msg::MotorInputMsg & ros_message)
{
  // Member: tgt_pos
  cdr >> ros_message.tgt_pos;

  // Member: tgt_torq
  cdr >> ros_message.tgt_torq;

  // Member: tgt_speed
  cdr >> ros_message.tgt_speed;

  // Member: tgt_kd
  cdr >> ros_message.tgt_kd;

  // Member: tgt_kp
  cdr >> ros_message.tgt_kp;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmsg
get_serialized_size(
  const rosmsg::msg::MotorInputMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tgt_pos
  {
    size_t item_size = sizeof(ros_message.tgt_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_torq
  {
    size_t item_size = sizeof(ros_message.tgt_torq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_speed
  {
    size_t item_size = sizeof(ros_message.tgt_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_kd
  {
    size_t item_size = sizeof(ros_message.tgt_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_kp
  {
    size_t item_size = sizeof(ros_message.tgt_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmsg
max_serialized_size_MotorInputMsg(
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

  // Member: tgt_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tgt_torq
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tgt_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tgt_kd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tgt_kp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmsg::msg::MotorInputMsg;
    is_plain =
      (
      offsetof(DataType, tgt_kp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmsg
cdr_serialize_key(
  const rosmsg::msg::MotorInputMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tgt_pos
  cdr << ros_message.tgt_pos;

  // Member: tgt_torq
  cdr << ros_message.tgt_torq;

  // Member: tgt_speed
  cdr << ros_message.tgt_speed;

  // Member: tgt_kd
  cdr << ros_message.tgt_kd;

  // Member: tgt_kp
  cdr << ros_message.tgt_kp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmsg
get_serialized_size_key(
  const rosmsg::msg::MotorInputMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tgt_pos
  {
    size_t item_size = sizeof(ros_message.tgt_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_torq
  {
    size_t item_size = sizeof(ros_message.tgt_torq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_speed
  {
    size_t item_size = sizeof(ros_message.tgt_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_kd
  {
    size_t item_size = sizeof(ros_message.tgt_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tgt_kp
  {
    size_t item_size = sizeof(ros_message.tgt_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmsg
max_serialized_size_key_MotorInputMsg(
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

  // Member: tgt_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tgt_torq
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tgt_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tgt_kd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tgt_kp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmsg::msg::MotorInputMsg;
    is_plain =
      (
      offsetof(DataType, tgt_kp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MotorInputMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosmsg::msg::MotorInputMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorInputMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosmsg::msg::MotorInputMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorInputMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosmsg::msg::MotorInputMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorInputMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorInputMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorInputMsg__callbacks = {
  "rosmsg::msg",
  "MotorInputMsg",
  _MotorInputMsg__cdr_serialize,
  _MotorInputMsg__cdr_deserialize,
  _MotorInputMsg__get_serialized_size,
  _MotorInputMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotorInputMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorInputMsg__callbacks,
  get_message_typesupport_handle_function,
  &rosmsg__msg__MotorInputMsg__get_type_hash,
  &rosmsg__msg__MotorInputMsg__get_type_description,
  &rosmsg__msg__MotorInputMsg__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosmsg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosmsg
const rosidl_message_type_support_t *
get_message_type_support_handle<rosmsg::msg::MotorInputMsg>()
{
  return &rosmsg::msg::typesupport_fastrtps_cpp::_MotorInputMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosmsg, msg, MotorInputMsg)() {
  return &rosmsg::msg::typesupport_fastrtps_cpp::_MotorInputMsg__handle;
}

#ifdef __cplusplus
}
#endif
