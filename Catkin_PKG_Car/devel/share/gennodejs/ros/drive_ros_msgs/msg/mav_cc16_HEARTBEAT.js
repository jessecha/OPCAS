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

class mav_cc16_HEARTBEAT {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.sysid = null;
      this.compid = null;
      this.battery_voltage = null;
      this.remote_control = null;
      this.drive_mode = null;
      this.rc_velocity = null;
      this.rc_steering_front = null;
      this.rc_steering_rear = null;
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
      if (initObj.hasOwnProperty('rc_velocity')) {
        this.rc_velocity = initObj.rc_velocity
      }
      else {
        this.rc_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('rc_steering_front')) {
        this.rc_steering_front = initObj.rc_steering_front
      }
      else {
        this.rc_steering_front = 0.0;
      }
      if (initObj.hasOwnProperty('rc_steering_rear')) {
        this.rc_steering_rear = initObj.rc_steering_rear
      }
      else {
        this.rc_steering_rear = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_HEARTBEAT
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [battery_voltage]
    bufferOffset = _serializer.uint16(obj.battery_voltage, buffer, bufferOffset);
    // Serialize message field [remote_control]
    bufferOffset = _serializer.uint8(obj.remote_control, buffer, bufferOffset);
    // Serialize message field [drive_mode]
    bufferOffset = _serializer.uint8(obj.drive_mode, buffer, bufferOffset);
    // Serialize message field [rc_velocity]
    bufferOffset = _serializer.float32(obj.rc_velocity, buffer, bufferOffset);
    // Serialize message field [rc_steering_front]
    bufferOffset = _serializer.float32(obj.rc_steering_front, buffer, bufferOffset);
    // Serialize message field [rc_steering_rear]
    bufferOffset = _serializer.float32(obj.rc_steering_rear, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_HEARTBEAT
    let len;
    let data = new mav_cc16_HEARTBEAT(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [battery_voltage]
    data.battery_voltage = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [remote_control]
    data.remote_control = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [drive_mode]
    data.drive_mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [rc_velocity]
    data.rc_velocity = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [rc_steering_front]
    data.rc_steering_front = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [rc_steering_rear]
    data.rc_steering_rear = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 18;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_HEARTBEAT';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7f0c43a59dc6fe6c5ede5ec59a47ab1b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.452693
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_HEARTBEAT(null);
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

    if (msg.rc_velocity !== undefined) {
      resolved.rc_velocity = msg.rc_velocity;
    }
    else {
      resolved.rc_velocity = 0.0
    }

    if (msg.rc_steering_front !== undefined) {
      resolved.rc_steering_front = msg.rc_steering_front;
    }
    else {
      resolved.rc_steering_front = 0.0
    }

    if (msg.rc_steering_rear !== undefined) {
      resolved.rc_steering_rear = msg.rc_steering_rear;
    }
    else {
      resolved.rc_steering_rear = 0.0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_HEARTBEAT.Constants = {
  ID: 1,
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

module.exports = mav_cc16_HEARTBEAT;
