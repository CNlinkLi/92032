// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosmsg:msg/MotorOutputMsg.idl
// generated code does not contain a copyright notice

#include "rosmsg/msg/detail/motor_output_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_type_hash_t *
rosmsg__msg__MotorOutputMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x66, 0x8c, 0xd5, 0x41, 0xf0, 0x37, 0x55,
      0x5c, 0xd4, 0x10, 0x40, 0xc6, 0x94, 0x2d, 0xd9,
      0xf6, 0x4f, 0x90, 0x37, 0x2c, 0xcc, 0x55, 0xee,
      0x67, 0x16, 0x5d, 0x1a, 0x66, 0x18, 0x4c, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rosmsg__msg__MotorOutputMsg__TYPE_NAME[] = "rosmsg/msg/MotorOutputMsg";

// Define type names, field names, and default values
static char rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_pos[] = "curr_pos";
static char rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_torq[] = "curr_torq";
static char rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_speed[] = "curr_speed";
static char rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_kp[] = "curr_kp";
static char rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_kd[] = "curr_kd";

static rosidl_runtime_c__type_description__Field rosmsg__msg__MotorOutputMsg__FIELDS[] = {
  {
    {rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_pos, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_torq, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_speed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_kp, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__MotorOutputMsg__FIELD_NAME__curr_kd, 7, 7},
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
rosmsg__msg__MotorOutputMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosmsg__msg__MotorOutputMsg__TYPE_NAME, 25, 25},
      {rosmsg__msg__MotorOutputMsg__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 curr_pos\n"
  "float32 curr_torq\n"
  "float32 curr_speed\n"
  "float32 curr_kp\n"
  "float32 curr_kd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosmsg__msg__MotorOutputMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosmsg__msg__MotorOutputMsg__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 86, 86},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosmsg__msg__MotorOutputMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosmsg__msg__MotorOutputMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
