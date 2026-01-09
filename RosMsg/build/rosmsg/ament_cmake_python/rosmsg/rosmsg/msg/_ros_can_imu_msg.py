# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosmsg:msg/RosCanImuMsg.idl
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


class Metaclass_RosCanImuMsg(type):
    """Metaclass of message 'RosCanImuMsg'."""

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
                'rosmsg.msg.RosCanImuMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ros_can_imu_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ros_can_imu_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ros_can_imu_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ros_can_imu_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ros_can_imu_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosCanImuMsg(metaclass=Metaclass_RosCanImuMsg):
    """Message class 'RosCanImuMsg'."""

    __slots__ = [
        '_qurd_x',
        '_qurd_y',
        '_qurd_z',
        '_qurd_w',
        '_gravity_x',
        '_gravity_y',
        '_gravity_z',
        '_ang_roll',
        '_ang_yaw',
        '_ang_pitch',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'qurd_x': 'float',
        'qurd_y': 'float',
        'qurd_z': 'float',
        'qurd_w': 'float',
        'gravity_x': 'float',
        'gravity_y': 'float',
        'gravity_z': 'float',
        'ang_roll': 'float',
        'ang_yaw': 'float',
        'ang_pitch': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.qurd_x = kwargs.get('qurd_x', float())
        self.qurd_y = kwargs.get('qurd_y', float())
        self.qurd_z = kwargs.get('qurd_z', float())
        self.qurd_w = kwargs.get('qurd_w', float())
        self.gravity_x = kwargs.get('gravity_x', float())
        self.gravity_y = kwargs.get('gravity_y', float())
        self.gravity_z = kwargs.get('gravity_z', float())
        self.ang_roll = kwargs.get('ang_roll', float())
        self.ang_yaw = kwargs.get('ang_yaw', float())
        self.ang_pitch = kwargs.get('ang_pitch', float())

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
        if self.qurd_x != other.qurd_x:
            return False
        if self.qurd_y != other.qurd_y:
            return False
        if self.qurd_z != other.qurd_z:
            return False
        if self.qurd_w != other.qurd_w:
            return False
        if self.gravity_x != other.gravity_x:
            return False
        if self.gravity_y != other.gravity_y:
            return False
        if self.gravity_z != other.gravity_z:
            return False
        if self.ang_roll != other.ang_roll:
            return False
        if self.ang_yaw != other.ang_yaw:
            return False
        if self.ang_pitch != other.ang_pitch:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def qurd_x(self):
        """Message field 'qurd_x'."""
        return self._qurd_x

    @qurd_x.setter
    def qurd_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'qurd_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'qurd_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._qurd_x = value

    @builtins.property
    def qurd_y(self):
        """Message field 'qurd_y'."""
        return self._qurd_y

    @qurd_y.setter
    def qurd_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'qurd_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'qurd_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._qurd_y = value

    @builtins.property
    def qurd_z(self):
        """Message field 'qurd_z'."""
        return self._qurd_z

    @qurd_z.setter
    def qurd_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'qurd_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'qurd_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._qurd_z = value

    @builtins.property
    def qurd_w(self):
        """Message field 'qurd_w'."""
        return self._qurd_w

    @qurd_w.setter
    def qurd_w(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'qurd_w' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'qurd_w' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._qurd_w = value

    @builtins.property
    def gravity_x(self):
        """Message field 'gravity_x'."""
        return self._gravity_x

    @gravity_x.setter
    def gravity_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gravity_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gravity_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gravity_x = value

    @builtins.property
    def gravity_y(self):
        """Message field 'gravity_y'."""
        return self._gravity_y

    @gravity_y.setter
    def gravity_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gravity_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gravity_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gravity_y = value

    @builtins.property
    def gravity_z(self):
        """Message field 'gravity_z'."""
        return self._gravity_z

    @gravity_z.setter
    def gravity_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gravity_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gravity_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gravity_z = value

    @builtins.property
    def ang_roll(self):
        """Message field 'ang_roll'."""
        return self._ang_roll

    @ang_roll.setter
    def ang_roll(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ang_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_roll = value

    @builtins.property
    def ang_yaw(self):
        """Message field 'ang_yaw'."""
        return self._ang_yaw

    @ang_yaw.setter
    def ang_yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ang_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_yaw = value

    @builtins.property
    def ang_pitch(self):
        """Message field 'ang_pitch'."""
        return self._ang_pitch

    @ang_pitch.setter
    def ang_pitch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ang_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ang_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ang_pitch = value
