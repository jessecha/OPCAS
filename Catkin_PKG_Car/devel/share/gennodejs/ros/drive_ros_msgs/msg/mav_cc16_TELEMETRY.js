// Auto-generated. Do not edit!

// (in-package drive_ros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class mav_cc16_TELEMETRY {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.sysid = null;
      this.compid = null;
      this.xacc = null;
      this.yacc = null;
      this.zacc = null;
      this.xgyro = null;
      this.ygyro = null;
      this.zgyro = null;
      this.dist_front = null;
      this.dist_rear = null;
      this.dist_side = null;
      this.odom = null;
      this.odom_accumulated = null;
      this.xmotion_front = null;
      this.ymotion_front = null;
      this.xmotion_rear = null;
      this.ymotion_rear = null;
      this.motion_front_quality = null;
      this.motion_rear_quality = null;
      this.current_motor = null;
      this.current_servo_front = null;
      this.current_servo_rear = null;
      this.current_total = null;
      this.pwm_servo_front = null;
      this.pwm_servo_rear = null;
      this.battery_voltage = null;
      this.remote_control = null;
      this.drive_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('sysid')) {
        this.sysid = initObj.sysid
      }
      else {
        this.sysid = 0;
      }
      if (initObj.hasOwnProperty('compid')) {
        this.compid = initObj.compid
      }
      else {
        this.compid = 0;
      }
      if (initObj.hasOwnProperty('xacc')) {
        this.xacc = initObj.xacc
      }
      else {
        this.xacc = 0.0;
      }
      if (initObj.hasOwnProperty('yacc')) {
        this.yacc = initObj.yacc
      }
      else {
        this.yacc = 0.0;
      }
      if (initObj.hasOwnProperty('zacc')) {
        this.zacc = initObj.zacc
      }
      else {
        this.zacc = 0.0;
      }
      if (initObj.hasOwnProperty('xgyro')) {
        this.xgyro = initObj.xgyro
      }
      else {
        this.xgyro = 0.0;
      }
      if (initObj.hasOwnProperty('ygyro')) {
        this.ygyro = initObj.ygyro
      }
      else {
        this.ygyro = 0.0;
      }
      if (initObj.hasOwnProperty('zgyro')) {
        this.zgyro = initObj.zgyro
      }
      else {
        this.zgyro = 0.0;
      }
      if (initObj.hasOwnProperty('dist_front')) {
        this.dist_front = initObj.dist_front
      }
      else {
        this.dist_front = 0.0;
      }
      if (initObj.hasOwnProperty('dist_rear')) {
        this.dist_rear = initObj.dist_rear
      }
      else {
        this.dist_rear = 0.0;
      }
      if (initObj.hasOwnProperty('dist_side')) {
        this.dist_side = initObj.dist_side
      }
      else {
        this.dist_side = 0.0;
      }
      if (initObj.hasOwnProperty('odom')) {
        this.odom = initObj.odom
      }
      else {
        this.odom = 0.0;
      }
      if (initObj.hasOwnProperty('odom_accumulated')) {
        this.odom_accumulated = initObj.odom_accumulated
      }
      else {
        this.odom_accumulated = 0.0;
      }
      if (initObj.hasOwnProperty('xmotion_front')) {
        this.xmotion_front = initObj.xmotion_front
      }
      else {
        this.xmotion_front = 0.0;
      }
      if (initObj.hasOwnProperty('ymotion_front')) {
        this.ymotion_front = initObj.ymotion_front
      }
      else {
        this.ymotion_front = 0.0;
      }
      if (initObj.hasOwnProperty('xmotion_rear')) {
        this.xmotion_rear = initObj.xmotion_rear
      }
      else {
        this.xmotion_rear = 0.0;
      }
      if (initObj.hasOwnProperty('ymotion_rear')) {
        this.ymotion_rear = initObj.ymotion_rear
      }
      else {
        this.ymotion_rear = 0.0;
      }
      if (initObj.hasOwnProperty('motion_front_quality')) {
        this.motion_front_quality = initObj.motion_front_quality
      }
      else {
        this.motion_front_quality = 0;
      }
      if (initObj.hasOwnProperty('motion_rear_quality')) {
        this.motion_rear_quality = initObj.motion_rear_quality
      }
      else {
        this.motion_rear_quality = 0;
      }
      if (initObj.hasOwnProperty('current_motor')) {
        this.current_motor = initObj.current_motor
      }
      else {
        this.current_motor = 0;
      }
      if (initObj.hasOwnProperty('current_servo_front')) {
        this.current_servo_front = initObj.current_servo_front
      }
      else {
        this.current_servo_front = 0;
      }
      if (initObj.hasOwnProperty('current_servo_rear')) {
        this.current_servo_rear = initObj.current_servo_rear
      }
      else {
        this.current_servo_rear = 0;
      }
      if (initObj.hasOwnProperty('current_total')) {
        this.current_total = initObj.current_total
      }
      else {
        this.current_total = 0;
      }
      if (initObj.hasOwnProperty('pwm_servo_front')) {
        this.pwm_servo_front = initObj.pwm_servo_front
      }
      else {
        this.pwm_servo_front = 0;
      }
      if (initObj.hasOwnProperty('pwm_servo_rear')) {
        this.pwm_servo_rear = initObj.pwm_servo_rear
      }
      else {
        this.pwm_servo_rear = 0;
      }
      if (initObj.hasOwnProperty('battery_voltage')) {
        this.battery_voltage = initObj.battery_voltage
      }
      else {
        this.battery_voltage = 0;
      }
      if (initObj.hasOwnProperty('remote_control')) {
        this.remote_control = initObj.remote_control
      }
      else {
        this.remote_control = 0;
      }
      if (initObj.hasOwnProperty('drive_mode')) {
        this.drive_mode = initObj.drive_mode
      }
      else {
        this.drive_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_TELEMETRY
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [xacc]
    bufferOffset = _serializer.float32(obj.xacc, buffer, bufferOffset);
    // Serialize message field [yacc]
    bufferOffset = _serializer.float32(obj.yacc, buffer, bufferOffset);
    // Serialize message field [zacc]
    bufferOffset = _serializer.float32(obj.zacc, buffer, bufferOffset);
    // Serialize message field [xgyro]
    bufferOffset = _serializer.float32(obj.xgyro, buffer, bufferOffset);
    // Serialize message field [ygyro]
    bufferOffset = _serializer.float32(obj.ygyro, buffer, bufferOffset);
    // Serialize message field [zgyro]
    bufferOffset = _serializer.float32(obj.zgyro, buffer, bufferOffset);
    // Serialize message field [dist_front]
    bufferOffset = _serializer.float32(obj.dist_front, buffer, bufferOffset);
    // Serialize message field [dist_rear]
    bufferOffset = _serializer.float32(obj.dist_rear, buffer, bufferOffset);
    // Serialize message field [dist_side]
    bufferOffset = _serializer.float32(obj.dist_side, buffer, bufferOffset);
    // Serialize message field [odom]
    bufferOffset = _serializer.float32(obj.odom, buffer, bufferOffset);
    // Serialize message field [odom_accumulated]
    bufferOffset = _serializer.float32(obj.odom_accumulated, buffer, bufferOffset);
    // Serialize message field [xmotion_front]
    bufferOffset = _serializer.float32(obj.xmotion_front, buffer, bufferOffset);
    // Serialize message field [ymotion_front]
    bufferOffset = _serializer.float32(obj.ymotion_front, buffer, bufferOffset);
    // Serialize message field [xmotion_rear]
    bufferOffset = _serializer.float32(obj.xmotion_rear, buffer, bufferOffset);
    // Serialize message field [ymotion_rear]
    bufferOffset = _serializer.float32(obj.ymotion_rear, buffer, bufferOffset);
    // Serialize message field [motion_front_quality]
    bufferOffset = _serializer.uint8(obj.motion_front_quality, buffer, bufferOffset);
    // Serialize message field [motion_rear_quality]
    bufferOffset = _serializer.uint8(obj.motion_rear_quality, buffer, bufferOffset);
    // Serialize message field [current_motor]
    bufferOffset = _serializer.int32(obj.current_motor, buffer, bufferOffset);
    // Serialize message field [current_servo_front]
    bufferOffset = _serializer.uint16(obj.current_servo_front, buffer, bufferOffset);
    // Serialize message field [current_servo_rear]
    bufferOffset = _serializer.uint16(obj.current_servo_rear, buffer, bufferOffset);
    // Serialize message field [current_total]
    bufferOffset = _serializer.uint16(obj.current_total, buffer, bufferOffset);
    // Serialize message field [pwm_servo_front]
    bufferOffset = _serializer.uint16(obj.pwm_servo_front, buffer, bufferOffset);
    // Serialize message field [pwm_servo_rear]
    bufferOffset = _serializer.uint16(obj.pwm_servo_rear, buffer, bufferOffset);
    // Serialize message field [battery_voltage]
    bufferOffset = _serializer.uint16(obj.battery_voltage, buffer, bufferOffset);
    // Serialize message field [remote_control]
    bufferOffset = _serializer.uint8(obj.remote_control, buffer, bufferOffset);
    // Serialize message field [drive_mode]
    bufferOffset = _serializer.uint8(obj.drive_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_TELEMETRY
    let len;
    let data = new mav_cc16_TELEMETRY(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [xacc]
    data.xacc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [yacc]
    data.yacc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [zacc]
    data.zacc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [xgyro]
    data.xgyro = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [ygyro]
    data.ygyro = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [zgyro]
    data.zgyro = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [dist_front]
    data.dist_front = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [dist_rear]
    data.dist_rear = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [dist_side]
    data.dist_side = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [odom]
    data.odom = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [odom_accumulated]
    data.odom_accumulated = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [xmotion_front]
    data.xmotion_front = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [ymotion_front]
    data.ymotion_front = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [xmotion_rear]
    data.xmotion_rear = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [ymotion_rear]
    data.ymotion_rear = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [motion_front_quality]
    data.motion_front_quality = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [motion_rear_quality]
    data.motion_rear_quality = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [current_motor]
    data.current_motor = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [current_servo_front]
    data.current_servo_front = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [current_servo_rear]
    data.current_servo_rear = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [current_total]
    data.current_total = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [pwm_servo_front]
    data.pwm_servo_front = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [pwm_servo_rear]
    data.pwm_servo_rear = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [battery_voltage]
    data.battery_voltage = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [remote_control]
    data.remote_control = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [drive_mode]
    data.drive_mode = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 82;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_TELEMETRY';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '432f9dfb0037d5f65f83be8d10976087';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.452753
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_TELEMETRY(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.sysid !== undefined) {
      resolved.sysid = msg.sysid;
    }
    else {
      resolved.sysid = 0
    }

    if (msg.compid !== undefined) {
      resolved.compid = msg.compid;
    }
    else {
      resolved.compid = 0
    }

    if (msg.xacc !== undefined) {
      resolved.xacc = msg.xacc;
    }
    else {
      resolved.xacc = 0.0
    }

    if (msg.yacc !== undefined) {
      resolved.yacc = msg.yacc;
    }
    else {
      resolved.yacc = 0.0
    }

    if (msg.zacc !== undefined) {
      resolved.zacc = msg.zacc;
    }
    else {
      resolved.zacc = 0.0
    }

    if (msg.xgyro !== undefined) {
      resolved.xgyro = msg.xgyro;
    }
    else {
      resolved.xgyro = 0.0
    }

    if (msg.ygyro !== undefined) {
      resolved.ygyro = msg.ygyro;
    }
    else {
      resolved.ygyro = 0.0
    }

    if (msg.zgyro !== undefined) {
      resolved.zgyro = msg.zgyro;
    }
    else {
      resolved.zgyro = 0.0
    }

    if (msg.dist_front !== undefined) {
      resolved.dist_front = msg.dist_front;
    }
    else {
      resolved.dist_front = 0.0
    }

    if (msg.dist_rear !== undefined) {
      resolved.dist_rear = msg.dist_rear;
    }
    else {
      resolved.dist_rear = 0.0
    }

    if (msg.dist_side !== undefined) {
      resolved.dist_side = msg.dist_side;
    }
    else {
      resolved.dist_side = 0.0
    }

    if (msg.odom !== undefined) {
      resolved.odom = msg.odom;
    }
    else {
      resolved.odom = 0.0
    }

    if (msg.odom_accumulated !== undefined) {
      resolved.odom_accumulated = msg.odom_accumulated;
    }
    else {
      resolved.odom_accumulated = 0.0
    }

    if (msg.xmotion_front !== undefined) {
      resolved.xmotion_front = msg.xmotion_front;
    }
    else {
      resolved.xmotion_front = 0.0
    }

    if (msg.ymotion_front !== undefined) {
      resolved.ymotion_front = msg.ymotion_front;
    }
    else {
      resolved.ymotion_front = 0.0
    }

    if (msg.xmotion_rear !== undefined) {
      resolved.xmotion_rear = msg.xmotion_rear;
    }
    else {
      resolved.xmotion_rear = 0.0
    }

    if (msg.ymotion_rear !== undefined) {
      resolved.ymotion_rear = msg.ymotion_rear;
    }
    else {
      resolved.ymotion_rear = 0.0
    }

    if (msg.motion_front_quality !== undefined) {
      resolved.motion_front_quality = msg.motion_front_quality;
    }
    else {
      resolved.motion_front_quality = 0
    }

    if (msg.motion_rear_quality !== undefined) {
      resolved.motion_rear_quality = msg.motion_rear_quality;
    }
    else {
      resolved.motion_rear_quality = 0
    }

    if (msg.current_motor !== undefined) {
      resolved.current_motor = msg.current_motor;
    }
    else {
      resolved.current_motor = 0
    }

    if (msg.current_servo_front !== undefined) {
      resolved.current_servo_front = msg.current_servo_front;
    }
    else {
      resolved.current_servo_front = 0
    }

    if (msg.current_servo_rear !== undefined) {
      resolved.current_servo_rear = msg.current_servo_rear;
    }
    else {
      resolved.current_servo_rear = 0
    }

    if (msg.current_total !== undefined) {
      resolved.current_total = msg.current_total;
    }
    else {
      resolved.current_total = 0
    }

    if (msg.pwm_servo_front !== undefined) {
      resolved.pwm_servo_front = msg.pwm_servo_front;
    }
    else {
      resolved.pwm_servo_front = 0
    }

    if (msg.pwm_servo_rear !== undefined) {
      resolved.pwm_servo_rear = msg.pwm_servo_rear;
    }
    else {
      resolved.pwm_servo_rear = 0
    }

    if (msg.battery_voltage !== undefined) {
      resolved.battery_voltage = msg.battery_voltage;
    }
    else {
      resolved.battery_voltage = 0
    }

    if (msg.remote_control !== undefined) {
      resolved.remote_control = msg.remote_control;
    }
    else {
      resolved.remote_control = 0
    }

    if (msg.drive_mode !== undefined) {
      resolved.drive_mode = msg.drive_mode;
    }
    else {
      resolved.drive_mode = 0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_TELEMETRY.Constants = {
  ID: 3,
  REMOTE_CONTROL_STATUS_DISCONNECTED: 0,
  REMOTE_CONTROL_STATUS_CONNECTED: 1,
  REMOTE_CONTROL_STATUS_AUTONOMOUS: 2,
  REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS: 3,
  REMOTE_CONTROL_STATUS_MANUAL: 4,
  DRIVE_MODE_TRACK: 0,
  DRIVE_MODE_TRACK_OBSTACLES: 1,
  DRIVE_MODE_PARKING: 2,
  DRIVE_MODE_IDLE: 3,
}

module.exports = mav_cc16_TELEMETRY;
