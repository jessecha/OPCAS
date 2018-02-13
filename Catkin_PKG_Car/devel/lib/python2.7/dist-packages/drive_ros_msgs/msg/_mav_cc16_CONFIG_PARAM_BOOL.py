# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from drive_ros_msgs/mav_cc16_CONFIG_PARAM_BOOL.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class mav_cc16_CONFIG_PARAM_BOOL(genpy.Message):
  _md5sum = "f69fc65033b547d535c6eb63d175db68"
  _type = "drive_ros_msgs/mav_cc16_CONFIG_PARAM_BOOL"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Automatically Generated in 2017-06-12 22:33:47.453148
# MESSAGE: CONFIG_PARAM_BOOL
# Description:Config parameter information for bool param
uint8 ID = 198
uint8 sysid
uint8 compid

uint8 config_id     # ID of the configuration set
uint8 param_id      # ID of the configuration parameter within the config set
char[30] name       # Name of the configuration parameter
uint8 value         # Current parameter value
uint8 default_value # Default parameter value
"""
  # Pseudo-constants
  ID = 198

  __slots__ = ['sysid','compid','config_id','param_id','name','value','default_value']
  _slot_types = ['uint8','uint8','uint8','uint8','char[30]','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sysid,compid,config_id,param_id,name,value,default_value

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mav_cc16_CONFIG_PARAM_BOOL, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.sysid is None:
        self.sysid = 0
      if self.compid is None:
        self.compid = 0
      if self.config_id is None:
        self.config_id = 0
      if self.param_id is None:
        self.param_id = 0
      if self.name is None:
        self.name = b'\0'*30
      if self.value is None:
        self.value = 0
      if self.default_value is None:
        self.default_value = 0
    else:
      self.sysid = 0
      self.compid = 0
      self.config_id = 0
      self.param_id = 0
      self.name = b'\0'*30
      self.value = 0
      self.default_value = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_4B().pack(_x.sysid, _x.compid, _x.config_id, _x.param_id))
      _x = self.name
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_30B().pack(*_x))
      else:
        buff.write(_get_struct_30s().pack(_x))
      _x = self
      buff.write(_get_struct_2B().pack(_x.value, _x.default_value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 4
      (_x.sysid, _x.compid, _x.config_id, _x.param_id,) = _get_struct_4B().unpack(str[start:end])
      start = end
      end += 30
      self.name = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.value, _x.default_value,) = _get_struct_2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4B().pack(_x.sysid, _x.compid, _x.config_id, _x.param_id))
      _x = self.name
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_30B().pack(*_x))
      else:
        buff.write(_get_struct_30s().pack(_x))
      _x = self
      buff.write(_get_struct_2B().pack(_x.value, _x.default_value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 4
      (_x.sysid, _x.compid, _x.config_id, _x.param_id,) = _get_struct_4B().unpack(str[start:end])
      start = end
      end += 30
      self.name = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.value, _x.default_value,) = _get_struct_2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_30B = None
def _get_struct_30B():
    global _struct_30B
    if _struct_30B is None:
        _struct_30B = struct.Struct("<30B")
    return _struct_30B
_struct_30s = None
def _get_struct_30s():
    global _struct_30s
    if _struct_30s is None:
        _struct_30s = struct.Struct("<30s")
    return _struct_30s
_struct_4B = None
def _get_struct_4B():
    global _struct_4B
    if _struct_4B is None:
        _struct_4B = struct.Struct("<4B")
    return _struct_4B
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
