// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_input_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__TRAITS_HPP_
#define ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosmsg/msg/detail/motor_input_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosmsg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorInputMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: tgt_pos
  {
    out << "tgt_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_pos, out);
    out << ", ";
  }

  // member: tgt_torq
  {
    out << "tgt_torq: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_torq, out);
    out << ", ";
  }

  // member: tgt_speed
  {
    out << "tgt_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_speed, out);
    out << ", ";
  }

  // member: tgt_kd
  {
    out << "tgt_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_kd, out);
    out << ", ";
  }

  // member: tgt_kp
  {
    out << "tgt_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_kp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorInputMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tgt_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tgt_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_pos, out);
    out << "\n";
  }

  // member: tgt_torq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tgt_torq: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_torq, out);
    out << "\n";
  }

  // member: tgt_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tgt_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_speed, out);
    out << "\n";
  }

  // member: tgt_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tgt_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_kd, out);
    out << "\n";
  }

  // member: tgt_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tgt_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt_kp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorInputMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rosmsg

namespace rosidl_generator_traits
{

[[deprecated("use rosmsg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosmsg::msg::MotorInputMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosmsg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosmsg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosmsg::msg::MotorInputMsg & msg)
{
  return rosmsg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosmsg::msg::MotorInputMsg>()
{
  return "rosmsg::msg::MotorInputMsg";
}

template<>
inline const char * name<rosmsg::msg::MotorInputMsg>()
{
  return "rosmsg/msg/MotorInputMsg";
}

template<>
struct has_fixed_size<rosmsg::msg::MotorInputMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosmsg::msg::MotorInputMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosmsg::msg::MotorInputMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__TRAITS_HPP_
