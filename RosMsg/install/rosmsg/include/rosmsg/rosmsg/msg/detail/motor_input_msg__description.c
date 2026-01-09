// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice

#include "rosmsg/msg/detail/motor_input_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_type_hash_t *
rosmsg__msg__MotorInputMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x3e, 0x3a, 0x63, 0x7b, 0xc2, 0xa7, 0x2d,
      0x14, 0x23, 0xfb, 0xba, 0x1e, 0x6b, 0x2d, 0xb8,
      0x32, 0x75, 0xd7, 0x27, 0x95, 0x8c, 0xa3, 0x66,
      0x00, 0x12, 0x55, 0xca, 0xab, 0x71, 0xd4, 0xd1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rosmsg__msg__MotorInputMsg__TYPE_NAME[] = "rosmsg/msg/MotorInputMsg";

// Define type names, field names, and default values
static char rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_pos[] = "tgt_pos";
static char rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_torq[] = "tgt_torq";
static char rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_speed[] = "tgt_speed";
static char rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_kd[] = "tgt_kd";
static char rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_kp[] = "tgt_kp";

static rosidl_runtime_c__type_description__Field rosmsg__msg__MotorInputMsg__FIELDS[] = {
  {
    {rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_pos, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_torq, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_kd, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorInputMsg__FIELD_NAME__tgt_kp, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosmsg__msg__MotorInputMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosmsg__msg__MotorInputMsg__TYPE_NAME, 24, 24},
      {rosmsg__msg__MotorInputMsg__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 tgt_pos\n"
  "float32 tgt_torq\n"
  "float32 tgt_speed\n"
  "float32 tgt_kd\n"
  "float32 tgt_kp\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosmsg__msg__MotorInputMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosmsg__msg__MotorInputMsg__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosmsg__msg__MotorInputMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosmsg__msg__MotorInputMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
