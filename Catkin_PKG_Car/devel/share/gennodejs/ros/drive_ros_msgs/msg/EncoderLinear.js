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

class EncoderLinear {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.pos_abs = null;
      this.pos_abs_var = null;
      this.pos_rel = null;
      this.pos_rel_var = null;
      this.vel = null;
      this.vel_var = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('pos_abs')) {
        this.pos_abs = initObj.pos_abs
      }
      else {
        this.pos_abs = 0.0;
      }
      if (initObj.hasOwnProperty('pos_abs_var')) {
        this.pos_abs_var = initObj.pos_abs_var
      }
      else {
        this.pos_abs_var = 0.0;
      }
      if (initObj.hasOwnProperty('pos_rel')) {
        this.pos_rel = initObj.pos_rel
      }
      else {
        this.pos_rel = 0.0;
      }
      if (initObj.hasOwnProperty('pos_rel_var')) {
        this.pos_rel_var = initObj.pos_rel_var
      }
      else {
        this.pos_rel_var = 0.0;
      }
      if (initObj.hasOwnProperty('vel')) {
        this.vel = initObj.vel
      }
      else {
        this.vel = 0.0;
      }
      if (initObj.hasOwnProperty('vel_var')) {
        this.vel_var = initObj.vel_var
      }
      else {
        this.vel_var = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EncoderLinear
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [pos_abs]
    bufferOffset = _serializer.float32(obj.pos_abs, buffer, bufferOffset);
    // Serialize message field [pos_abs_var]
    bufferOffset = _serializer.float32(obj.pos_abs_var, buffer, bufferOffset);
    // Serialize message field [pos_rel]
    bufferOffset = _serializer.float32(obj.pos_rel, buffer, bufferOffset);
    // Serialize message field [pos_rel_var]
    bufferOffset = _serializer.float32(obj.pos_rel_var, buffer, bufferOffset);
    // Serialize message field [vel]
    bufferOffset = _serializer.float32(obj.vel, buffer, bufferOffset);
    // Serialize message field [vel_var]
    bufferOffset = _serializer.float32(obj.vel_var, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EncoderLinear
    let len;
    let data = new EncoderLinear(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [pos_abs]
    data.pos_abs = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [pos_abs_var]
    data.pos_abs_var = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [pos_rel]
    data.pos_rel = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [pos_rel_var]
    data.pos_rel_var = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [vel]
    data.vel = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [vel_var]
    data.vel_var = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/EncoderLinear';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c78bee85271f30efdc5b5221778b0109';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # linear encoder message
    Header header
    
    # absolut position of encoder in [m]
    float32 pos_abs
    float32 pos_abs_var
    
    # relative position of encoder in [m] compared to last message
    float32 pos_rel
    float32 pos_rel_var
    
    # velocity of encoder in [m/s]
    float32 vel
    float32 vel_var
    
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
    const resolved = new EncoderLinear(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.pos_abs !== undefined) {
      resolved.pos_abs = msg.pos_abs;
    }
    else {
      resolved.pos_abs = 0.0
    }

    if (msg.pos_abs_var !== undefined) {
      resolved.pos_abs_var = msg.pos_abs_var;
    }
    else {
      resolved.pos_abs_var = 0.0
    }

    if (msg.pos_rel !== undefined) {
      resolved.pos_rel = msg.pos_rel;
    }
    else {
      resolved.pos_rel = 0.0
    }

    if (msg.pos_rel_var !== undefined) {
      resolved.pos_rel_var = msg.pos_rel_var;
    }
    else {
      resolved.pos_rel_var = 0.0
    }

    if (msg.vel !== undefined) {
      resolved.vel = msg.vel;
    }
    else {
      resolved.vel = 0.0
    }

    if (msg.vel_var !== undefined) {
      resolved.vel_var = msg.vel_var;
    }
    else {
      resolved.vel_var = 0.0
    }

    return resolved;
    }
};

module.exports = EncoderLinear;
