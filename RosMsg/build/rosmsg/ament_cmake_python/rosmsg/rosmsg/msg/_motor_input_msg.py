# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosmsg:msg/MotorInputMsg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorInputMsg(type):
    """Metaclass of message 'MotorInputMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rosmsg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosmsg.msg.MotorInputMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_input_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_input_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_input_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_input_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_input_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorInputMsg(metaclass=Metaclass_MotorInputMsg):
    """Message class 'MotorInputMsg'."""

    __slots__ = [
        '_tgt_pos',
        '_tgt_torq',
        '_tgt_speed',
        '_tgt_kd',
        '_tgt_kp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'tgt_pos': 'float',
        'tgt_torq': 'float',
        'tgt_speed': 'float',
        'tgt_kd': 'float',
        'tgt_kp': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tgt_pos = kwargs.get('tgt_pos', float())
        self.tgt_torq = kwargs.get('tgt_torq', float())
        self.tgt_speed = kwargs.get('tgt_speed', float())
        self.tgt_kd = kwargs.get('tgt_kd', float())
        self.tgt_kp = kwargs.get('tgt_kp', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.tgt_pos != other.tgt_pos:
            return False
        if self.tgt_torq != other.tgt_torq:
            return False
        if self.tgt_speed != other.tgt_speed:
            return False
        if self.tgt_kd != other.tgt_kd:
            return False
        if self.tgt_kp != other.tgt_kp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tgt_pos(self):
        """Message field 'tgt_pos'."""
        return self._tgt_pos

    @tgt_pos.setter
    def tgt_pos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tgt_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tgt_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tgt_pos = value

    @builtins.property
    def tgt_torq(self):
        """Message field 'tgt_torq'."""
        return self._tgt_torq

    @tgt_torq.setter
    def tgt_torq(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tgt_torq' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tgt_torq' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tgt_torq = value

    @builtins.property
    def tgt_speed(self):
        """Message field 'tgt_speed'."""
        return self._tgt_speed

    @tgt_speed.setter
    def tgt_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tgt_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tgt_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tgt_speed = value

    @builtins.property
    def tgt_kd(self):
        """Message field 'tgt_kd'."""
        return self._tgt_kd

    @tgt_kd.setter
    def tgt_kd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tgt_kd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tgt_kd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tgt_kd = value

    @builtins.property
    def tgt_kp(self):
        """Message field 'tgt_kp'."""
        return self._tgt_kp

    @tgt_kp.setter
    def tgt_kp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tgt_kp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tgt_kp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tgt_kp = value
