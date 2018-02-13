# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from drive_ros_msgs/mav_cc16_TELEMETRY.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mav_cc16_TELEMETRY(genpy.Message):
  _md5sum = "432f9dfb0037d5f65f83be8d10976087"
  _type = "drive_ros_msgs/mav_cc16_TELEMETRY"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Automatically Generated in 2017-06-12 22:33:47.452753
# MESSAGE: TELEMETRY
# Description:Telemetry
Header header

uint8 ID = 3
uint8 sysid
uint8 compid

float32 xacc
float32 yacc
float32 zacc
float32 xgyro
float32 ygyro
float32 zgyro
float32 dist_front
float32 dist_rear
float32 dist_side
float32 odom
float32 odom_accumulated
float32 xmotion_front
float32 ymotion_front
float32 xmotion_rear
float32 ymotion_rear
uint8 motion_front_quality
uint8 motion_rear_quality
int32 current_motor
uint16 current_servo_front
uint16 current_servo_rear
uint16 current_total
uint16 pwm_servo_front
uint16 pwm_servo_rear
uint16 battery_voltage
uint8 remote_control
uint8 drive_mode


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
  ID = 3
  REMOTE_CONTROL_STATUS_DISCONNECTED = 0
  REMOTE_CONTROL_STATUS_CONNECTED = 1
  REMOTE_CONTROL_STATUS_AUTONOMOUS = 2
  REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3
  REMOTE_CONTROL_STATUS_MANUAL = 4
  DRIVE_MODE_TRACK = 0
  DRIVE_MODE_TRACK_OBSTACLES = 1
  DRIVE_MODE_PARKING = 2
  DRIVE_MODE_IDLE = 3

  __slots__ = ['header','sysid','compid','xacc','yacc','zacc','xgyro','ygyro','zgyro','dist_front','dist_rear','dist_side','odom','odom_accumulated','xmotion_front','ymotion_front','xmotion_rear','ymotion_rear','motion_front_quality','motion_rear_quality','current_motor','current_servo_front','current_servo_rear','current_total','pwm_servo_front','pwm_servo_rear','battery_voltage','remote_control','drive_mode']
  _slot_types = ['std_msgs/Header','uint8','uint8','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','uint8','uint8','int32','uint16','uint16','uint16','uint16','uint16','uint16','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,sysid,compid,xacc,yacc,zacc,xgyro,ygyro,zgyro,dist_front,dist_rear,dist_side,odom,odom_accumulated,xmotion_front,ymotion_front,xmotion_rear,ymotion_rear,motion_front_quality,motion_rear_quality,current_motor,current_servo_front,current_servo_rear,current_total,pwm_servo_front,pwm_servo_rear,battery_voltage,remote_control,drive_mode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mav_cc16_TELEMETRY, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.sysid is None:
        self.sysid = 0
      if self.compid is None:
        self.compid = 0
      if self.xacc is None:
        self.xacc = 0.
      if self.yacc is None:
        self.yacc = 0.
      if self.zacc is None:
        self.zacc = 0.
      if self.xgyro is None:
        self.xgyro = 0.
      if self.ygyro is None:
        self.ygyro = 0.
      if self.zgyro is None:
        self.zgyro = 0.
      if self.dist_front is None:
        self.dist_front = 0.
      if self.dist_rear is None:
        self.dist_rear = 0.
      if self.dist_side is None:
        self.dist_side = 0.
      if self.odom is None:
        self.odom = 0.
      if self.odom_accumulated is None:
        self.odom_accumulated = 0.
      if self.xmotion_front is None:
        self.xmotion_front = 0.
      if self.ymotion_front is None:
        self.ymotion_front = 0.
      if self.xmotion_rear is None:
        self.xmotion_rear = 0.
      if self.ymotion_rear is None:
        self.ymotion_rear = 0.
      if self.motion_front_quality is None:
        self.motion_front_quality = 0
      if self.motion_rear_quality is None:
        self.motion_rear_quality = 0
      if self.current_motor is None:
        self.current_motor = 0
      if self.current_servo_front is None:
        self.current_servo_front = 0
      if self.current_servo_rear is None:
        self.current_servo_rear = 0
      if self.current_total is None:
        self.current_total = 0
      if self.pwm_servo_front is None:
        self.pwm_servo_front = 0
      if self.pwm_servo_rear is None:
        self.pwm_servo_rear = 0
      if self.battery_voltage is None:
        self.battery_voltage = 0
      if self.remote_control is None:
        self.remote_control = 0
      if self.drive_mode is None:
        self.drive_mode = 0
    else:
      self.header = std_msgs.msg.Header()
      self.sysid = 0
      self.compid = 0
      self.xacc = 0.
      self.yacc = 0.
      self.zacc = 0.
      self.xgyro = 0.
      self.ygyro = 0.
      self.zgyro = 0.
      self.dist_front = 0.
      self.dist_rear = 0.
      self.dist_side = 0.
      self.odom = 0.
      self.odom_accumulated = 0.
      self.xmotion_front = 0.
      self.ymotion_front = 0.
      self.xmotion_rear = 0.
      self.ymotion_rear = 0.
      self.motion_front_quality = 0
      self.motion_rear_quality = 0
      self.current_motor = 0
      self.current_servo_front = 0
      self.current_servo_rear = 0
      self.current_total = 0
      self.pwm_servo_front = 0
      self.pwm_servo_rear = 0
      self.battery_voltage = 0
      self.remote_control = 0
      self.drive_mode = 0

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
      buff.write(_get_struct_2B15f2Bi6H2B().pack(_x.sysid, _x.compid, _x.xacc, _x.yacc, _x.zacc, _x.xgyro, _x.ygyro, _x.zgyro, _x.dist_front, _x.dist_rear, _x.dist_side, _x.odom, _x.odom_accumulated, _x.xmotion_front, _x.ymotion_front, _x.xmotion_rear, _x.ymotion_rear, _x.motion_front_quality, _x.motion_rear_quality, _x.current_motor, _x.current_servo_front, _x.current_servo_rear, _x.current_total, _x.pwm_servo_front, _x.pwm_servo_rear, _x.battery_voltage, _x.remote_control, _x.drive_mode))
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
      end += 82
      (_x.sysid, _x.compid, _x.xacc, _x.yacc, _x.zacc, _x.xgyro, _x.ygyro, _x.zgyro, _x.dist_front, _x.dist_rear, _x.dist_side, _x.odom, _x.odom_accumulated, _x.xmotion_front, _x.ymotion_front, _x.xmotion_rear, _x.ymotion_rear, _x.motion_front_quality, _x.motion_rear_quality, _x.current_motor, _x.current_servo_front, _x.current_servo_rear, _x.current_total, _x.pwm_servo_front, _x.pwm_servo_rear, _x.battery_voltage, _x.remote_control, _x.drive_mode,) = _get_struct_2B15f2Bi6H2B().unpack(str[start:end])
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
      buff.write(_get_struct_2B15f2Bi6H2B().pack(_x.sysid, _x.compid, _x.xacc, _x.yacc, _x.zacc, _x.xgyro, _x.ygyro, _x.zgyro, _x.dist_front, _x.dist_rear, _x.dist_side, _x.odom, _x.odom_accumulated, _x.xmotion_front, _x.ymotion_front, _x.xmotion_rear, _x.ymotion_rear, _x.motion_front_quality, _x.motion_rear_quality, _x.current_motor, _x.current_servo_front, _x.current_servo_rear, _x.current_total, _x.pwm_servo_front, _x.pwm_servo_rear, _x.battery_voltage, _x.remote_control, _x.drive_mode))
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
      end += 82
      (_x.sysid, _x.compid, _x.xacc, _x.yacc, _x.zacc, _x.xgyro, _x.ygyro, _x.zgyro, _x.dist_front, _x.dist_rear, _x.dist_side, _x.odom, _x.odom_accumulated, _x.xmotion_front, _x.ymotion_front, _x.xmotion_rear, _x.ymotion_rear, _x.motion_front_quality, _x.motion_rear_quality, _x.current_motor, _x.current_servo_front, _x.current_servo_rear, _x.current_total, _x.pwm_servo_front, _x.pwm_servo_rear, _x.battery_voltage, _x.remote_control, _x.drive_mode,) = _get_struct_2B15f2Bi6H2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_2B15f2Bi6H2B = None
def _get_struct_2B15f2Bi6H2B():
    global _struct_2B15f2Bi6H2B
    if _struct_2B15f2Bi6H2B is None:
        _struct_2B15f2Bi6H2B = struct.Struct("<2B15f2Bi6H2B")
    return _struct_2B15f2Bi6H2B
