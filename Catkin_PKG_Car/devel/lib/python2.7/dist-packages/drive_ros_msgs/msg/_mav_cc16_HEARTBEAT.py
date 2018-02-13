# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from drive_ros_msgs/mav_cc16_HEARTBEAT.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mav_cc16_HEARTBEAT(genpy.Message):
  _md5sum = "7f0c43a59dc6fe6c5ede5ec59a47ab1b"
  _type = "drive_ros_msgs/mav_cc16_HEARTBEAT"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Automatically Generated in 2017-06-12 22:33:47.452693
# MESSAGE: HEARTBEAT
# Description:Heartbeat status message
Header header

uint8 ID = 1
uint8 sysid
uint8 compid

uint16 battery_voltage      # Battery voltage, in millivolts (1 = 1 millivolt)
uint8 remote_control        # Remote Control status (see REMOTE_CONTROL_STATUS ENUM)
uint8 drive_mode            # Selected drive mode (see DRIVE_MODE ENUM)
float32 rc_velocity         # Velocity set by remote control [m/s]
float32 rc_steering_front   # Front steering angle set by remote control [rad]
float32 rc_steering_rear    # Rear steering angle set by remote control [rad]

uint8 REMOTE_CONTROL_STATUS_DISCONNECTED = 0     # Remote Control is not connected to the system
uint8 REMOTE_CONTROL_STATUS_CONNECTED = 1        # Remote Control connection is established
uint8 REMOTE_CONTROL_STATUS_AUTONOMOUS = 2       # Remote Control is connected and under active control
uint8 REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3  # Remote Control is connected and under active control
uint8 REMOTE_CONTROL_STATUS_MANUAL = 4           # Remote Control is connected and under active control


uint8 DRIVE_MODE_TRACK = 0              # Track (excluding obstacles)
uint8 DRIVE_MODE_TRACK_OBSTACLES = 1    # Track including obstacles
uint8 DRIVE_MODE_PARKING = 2            # Parking mode
uint8 DRIVE_MODE_IDLE = 3               # Idle mode

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  # Pseudo-constants
  ID = 1
  REMOTE_CONTROL_STATUS_DISCONNECTED = 0
  REMOTE_CONTROL_STATUS_CONNECTED = 1
  REMOTE_CONTROL_STATUS_AUTONOMOUS = 2
  REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3
  REMOTE_CONTROL_STATUS_MANUAL = 4
  DRIVE_MODE_TRACK = 0
  DRIVE_MODE_TRACK_OBSTACLES = 1
  DRIVE_MODE_PARKING = 2
  DRIVE_MODE_IDLE = 3

  __slots__ = ['header','sysid','compid','battery_voltage','remote_control','drive_mode','rc_velocity','rc_steering_front','rc_steering_rear']
  _slot_types = ['std_msgs/Header','uint8','uint8','uint16','uint8','uint8','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,sysid,compid,battery_voltage,remote_control,drive_mode,rc_velocity,rc_steering_front,rc_steering_rear

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mav_cc16_HEARTBEAT, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.sysid is None:
        self.sysid = 0
      if self.compid is None:
        self.compid = 0
      if self.battery_voltage is None:
        self.battery_voltage = 0
      if self.remote_control is None:
        self.remote_control = 0
      if self.drive_mode is None:
        self.drive_mode = 0
      if self.rc_velocity is None:
        self.rc_velocity = 0.
      if self.rc_steering_front is None:
        self.rc_steering_front = 0.
      if self.rc_steering_rear is None:
        self.rc_steering_rear = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.sysid = 0
      self.compid = 0
      self.battery_voltage = 0
      self.remote_control = 0
      self.drive_mode = 0
      self.rc_velocity = 0.
      self.rc_steering_front = 0.
      self.rc_steering_rear = 0.

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2BH2B3f().pack(_x.sysid, _x.compid, _x.battery_voltage, _x.remote_control, _x.drive_mode, _x.rc_velocity, _x.rc_steering_front, _x.rc_steering_rear))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 18
      (_x.sysid, _x.compid, _x.battery_voltage, _x.remote_control, _x.drive_mode, _x.rc_velocity, _x.rc_steering_front, _x.rc_steering_rear,) = _get_struct_2BH2B3f().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2BH2B3f().pack(_x.sysid, _x.compid, _x.battery_voltage, _x.remote_control, _x.drive_mode, _x.rc_velocity, _x.rc_steering_front, _x.rc_steering_rear))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 18
      (_x.sysid, _x.compid, _x.battery_voltage, _x.remote_control, _x.drive_mode, _x.rc_velocity, _x.rc_steering_front, _x.rc_steering_rear,) = _get_struct_2BH2B3f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2BH2B3f = None
def _get_struct_2BH2B3f():
    global _struct_2BH2B3f
    if _struct_2BH2B3f is None:
        _struct_2BH2B3f = struct.Struct("<2BH2B3f")
    return _struct_2BH2B3f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
