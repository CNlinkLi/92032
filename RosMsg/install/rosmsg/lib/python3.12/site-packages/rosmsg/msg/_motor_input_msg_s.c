// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rosmsg/msg/detail/motor_input_msg__struct.h"
#include "rosmsg/msg/detail/motor_input_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rosmsg__msg__motor_input_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rosmsg.msg._motor_input_msg.MotorInputMsg", full_classname_dest, 41) == 0);
  }
  rosmsg__msg__MotorInputMsg * ros_message = _ros_message;
  {  // tgt_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "tgt_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tgt_pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tgt_torq
    PyObject * field = PyObject_GetAttrString(_pymsg, "tgt_torq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tgt_torq = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tgt_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "tgt_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tgt_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tgt_kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "tgt_kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tgt_kd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tgt_kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "tgt_kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tgt_kp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosmsg__msg__motor_input_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorInputMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosmsg.msg._motor_input_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorInputMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosmsg__msg__MotorInputMsg * ros_message = (rosmsg__msg__MotorInputMsg *)raw_ros_message;
  {  // tgt_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tgt_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tgt_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tgt_torq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tgt_torq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tgt_torq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tgt_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tgt_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tgt_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tgt_kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tgt_kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tgt_kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tgt_kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tgt_kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tgt_kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
