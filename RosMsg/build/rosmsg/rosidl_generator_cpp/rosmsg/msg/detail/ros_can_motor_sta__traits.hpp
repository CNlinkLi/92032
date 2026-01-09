// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosmsg:msg/RosCanMotorSta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_motor_sta.hpp"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__TRAITS_HPP_
#define ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosmsg/msg/detail/ros_can_motor_sta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motor'
#include "rosmsg/msg/detail/motor_output_msg__traits.hpp"

namespace rosmsg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosCanMotorSta & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor
  {
    if (msg.motor.size() == 0) {
      out << "motor: []";
    } else {
      out << "motor: [";
      size_t pending_items = msg.motor.size();
      for (auto item : msg.motor) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosCanMotorSta & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor.size() == 0) {
      out << "motor: []\n";
    } else {
      out << "motor:\n";
      for (auto item : msg.motor) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosCanMotorSta & msg, bool use_flow_style = false)
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
  const rosmsg::msg::RosCanMotorSta & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosmsg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosmsg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosmsg::msg::RosCanMotorSta & msg)
{
  return rosmsg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosmsg::msg::RosCanMotorSta>()
{
  return "rosmsg::msg::RosCanMotorSta";
}

template<>
inline const char * name<rosmsg::msg::RosCanMotorSta>()
{
  return "rosmsg/msg/RosCanMotorSta";
}

template<>
struct has_fixed_size<rosmsg::msg::RosCanMotorSta>
  : std::integral_constant<bool, has_fixed_size<rosmsg::msg::MotorOutputMsg>::value> {};

template<>
struct has_bounded_size<rosmsg::msg::RosCanMotorSta>
  : std::integral_constant<bool, has_bounded_size<rosmsg::msg::MotorOutputMsg>::value> {};

template<>
struct is_message<rosmsg::msg::RosCanMotorSta>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__TRAITS_HPP_
