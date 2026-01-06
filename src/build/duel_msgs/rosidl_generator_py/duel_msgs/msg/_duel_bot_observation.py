# generated from rosidl_generator_py/resource/_idl.py.em
# with input from duel_msgs:msg/DuelBotObservation.idl
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


class Metaclass_DuelBotObservation(type):
    """Metaclass of message 'DuelBotObservation'."""

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
            module = import_type_support('duel_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'duel_msgs.msg.DuelBotObservation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__duel_bot_observation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__duel_bot_observation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__duel_bot_observation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__duel_bot_observation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__duel_bot_observation

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DuelBotObservation(metaclass=Metaclass_DuelBotObservation):
    """Message class 'DuelBotObservation'."""

    __slots__ = [
        '_relative_target_position',
        '_sword_rotation',
        '_shoulder_rotation',
        '_elbow_rotation',
        '_wrist_rotation',
        '_shoulder_vel',
        '_elbow_vel',
        '_wrist_vel',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'relative_target_position': 'geometry_msgs/Vector3',
        'sword_rotation': 'geometry_msgs/Quaternion',
        'shoulder_rotation': 'geometry_msgs/Quaternion',
        'elbow_rotation': 'float',
        'wrist_rotation': 'geometry_msgs/Quaternion',
        'shoulder_vel': 'geometry_msgs/Vector3',
        'elbow_vel': 'float',
        'wrist_vel': 'geometry_msgs/Vector3',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
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
        from geometry_msgs.msg import Vector3
        self.relative_target_position = kwargs.get('relative_target_position', Vector3())
        from geometry_msgs.msg import Quaternion
        self.sword_rotation = kwargs.get('sword_rotation', Quaternion())
        from geometry_msgs.msg import Quaternion
        self.shoulder_rotation = kwargs.get('shoulder_rotation', Quaternion())
        self.elbow_rotation = kwargs.get('elbow_rotation', float())
        from geometry_msgs.msg import Quaternion
        self.wrist_rotation = kwargs.get('wrist_rotation', Quaternion())
        from geometry_msgs.msg import Vector3
        self.shoulder_vel = kwargs.get('shoulder_vel', Vector3())
        self.elbow_vel = kwargs.get('elbow_vel', float())
        from geometry_msgs.msg import Vector3
        self.wrist_vel = kwargs.get('wrist_vel', Vector3())

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
        if self.relative_target_position != other.relative_target_position:
            return False
        if self.sword_rotation != other.sword_rotation:
            return False
        if self.shoulder_rotation != other.shoulder_rotation:
            return False
        if self.elbow_rotation != other.elbow_rotation:
            return False
        if self.wrist_rotation != other.wrist_rotation:
            return False
        if self.shoulder_vel != other.shoulder_vel:
            return False
        if self.elbow_vel != other.elbow_vel:
            return False
        if self.wrist_vel != other.wrist_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def relative_target_position(self):
        """Message field 'relative_target_position'."""
        return self._relative_target_position

    @relative_target_position.setter
    def relative_target_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'relative_target_position' field must be a sub message of type 'Vector3'"
        self._relative_target_position = value

    @builtins.property
    def sword_rotation(self):
        """Message field 'sword_rotation'."""
        return self._sword_rotation

    @sword_rotation.setter
    def sword_rotation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'sword_rotation' field must be a sub message of type 'Quaternion'"
        self._sword_rotation = value

    @builtins.property
    def shoulder_rotation(self):
        """Message field 'shoulder_rotation'."""
        return self._shoulder_rotation

    @shoulder_rotation.setter
    def shoulder_rotation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'shoulder_rotation' field must be a sub message of type 'Quaternion'"
        self._shoulder_rotation = value

    @builtins.property
    def elbow_rotation(self):
        """Message field 'elbow_rotation'."""
        return self._elbow_rotation

    @elbow_rotation.setter
    def elbow_rotation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'elbow_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'elbow_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._elbow_rotation = value

    @builtins.property
    def wrist_rotation(self):
        """Message field 'wrist_rotation'."""
        return self._wrist_rotation

    @wrist_rotation.setter
    def wrist_rotation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'wrist_rotation' field must be a sub message of type 'Quaternion'"
        self._wrist_rotation = value

    @builtins.property
    def shoulder_vel(self):
        """Message field 'shoulder_vel'."""
        return self._shoulder_vel

    @shoulder_vel.setter
    def shoulder_vel(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'shoulder_vel' field must be a sub message of type 'Vector3'"
        self._shoulder_vel = value

    @builtins.property
    def elbow_vel(self):
        """Message field 'elbow_vel'."""
        return self._elbow_vel

    @elbow_vel.setter
    def elbow_vel(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'elbow_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'elbow_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._elbow_vel = value

    @builtins.property
    def wrist_vel(self):
        """Message field 'wrist_vel'."""
        return self._wrist_vel

    @wrist_vel.setter
    def wrist_vel(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'wrist_vel' field must be a sub message of type 'Vector3'"
        self._wrist_vel = value
