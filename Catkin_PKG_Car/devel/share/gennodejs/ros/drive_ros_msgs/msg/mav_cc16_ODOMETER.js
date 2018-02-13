// Auto-generated. Do not edit!

// (in-package drive_ros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class mav_cc16_ODOMETER {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.sysid = null;
      this.compid = null;
      this.time_delta = null;
      this.dist_delta = null;
      this.dist_abs = null;
      this.velocity = null;
      this.quality = null;
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
      if (initObj.hasOwnProperty('time_delta')) {
        this.time_delta = initObj.time_delta
      }
      else {
        this.time_delta = 0.0;
      }
      if (initObj.hasOwnProperty('dist_delta')) {
        this.dist_delta = initObj.dist_delta
      }
      else {
        this.dist_delta = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('dist_abs')) {
        this.dist_abs = initObj.dist_abs
      }
      else {
        this.dist_abs = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('quality')) {
        this.quality = initObj.quality
      }
      else {
        this.quality = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_ODOMETER
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [time_delta]
    bufferOffset = _serializer.float32(obj.time_delta, buffer, bufferOffset);
    // Serialize message field [dist_delta]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.dist_delta, buffer, bufferOffset);
    // Serialize message field [dist_abs]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.dist_abs, buffer, bufferOffset);
    // Serialize message field [velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.velocity, buffer, bufferOffset);
    // Serialize message field [quality]
    bufferOffset = _serializer.int16(obj.quality, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_ODOMETER
    let len;
    let data = new mav_cc16_ODOMETER(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [time_delta]
    data.time_delta = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [dist_delta]
    data.dist_delta = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [dist_abs]
    data.dist_abs = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [velocity]
    data.velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [quality]
    data.quality = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 80;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_ODOMETER';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6cebc1146cffb91bedfc5ca00d013869';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.452972
    # MESSAGE: ODOMETER
    # Description:Measurement of Odometry Sensor
    Header header
    
    uint8 ID = 140
    uint8 sysid
    uint8 compid
    
    float32 time_delta                  # Time-delta within which the measurement has taken place [s]
    geometry_msgs/Vector3 dist_delta    # Distance travelled within period [m]
    geometry_msgs/Vector3 dist_abs      # Distance travelled [m]
    geometry_msgs/Vector3 velocity      # Velocity [m/s]
    int16 quality                       # Measurement quality indicator (-1 for no quality)
    
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
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_ODOMETER(null);
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

    if (msg.time_delta !== undefined) {
      resolved.time_delta = msg.time_delta;
    }
    else {
      resolved.time_delta = 0.0
    }

    if (msg.dist_delta !== undefined) {
      resolved.dist_delta = geometry_msgs.msg.Vector3.Resolve(msg.dist_delta)
    }
    else {
      resolved.dist_delta = new geometry_msgs.msg.Vector3()
    }

    if (msg.dist_abs !== undefined) {
      resolved.dist_abs = geometry_msgs.msg.Vector3.Resolve(msg.dist_abs)
    }
    else {
      resolved.dist_abs = new geometry_msgs.msg.Vector3()
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = geometry_msgs.msg.Vector3.Resolve(msg.velocity)
    }
    else {
      resolved.velocity = new geometry_msgs.msg.Vector3()
    }

    if (msg.quality !== undefined) {
      resolved.quality = msg.quality;
    }
    else {
      resolved.quality = 0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_ODOMETER.Constants = {
  ID: 140,
}

module.exports = mav_cc16_ODOMETER;
