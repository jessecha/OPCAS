// Auto-generated. Do not edit!

// (in-package drive_ros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let EncoderLinear = require('./EncoderLinear.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class VehicleEncoder {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.encoder = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('encoder')) {
        this.encoder = initObj.encoder
      }
      else {
        this.encoder = new Array(4).fill(new EncoderLinear());
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type VehicleEncoder
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Check that the constant length array field [encoder] has the right length
    if (obj.encoder.length !== 4) {
      throw new Error('Unable to serialize array field encoder - length must be 4')
    }
    // Serialize message field [encoder]
    obj.encoder.forEach((val) => {
      bufferOffset = EncoderLinear.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type VehicleEncoder
    let len;
    let data = new VehicleEncoder(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [encoder]
    len = 4;
    data.encoder = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.encoder[i] = EncoderLinear.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    object.encoder.forEach((val) => {
      length += EncoderLinear.getMessageSize(val);
    });
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/VehicleEncoder';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a9cb468b8c6666bc24bad1a31a5a51a0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    
    # array of encoders
    EncoderLinear[4] encoder
    
    # only one motor encoder
    uint8 MOTOR=0
    
    # 4 wheel encoders
    uint8 FRONT_WHEEL_LEFT=0
    uint8 FRONT_WHEEL_RIGHT=1
    uint8 REAR_WHEEL_LEFT=2
    uint8 REAR_WHEEL_RIGHT=3
    
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
    MSG: drive_ros_msgs/EncoderLinear
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new VehicleEncoder(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.encoder !== undefined) {
      resolved.encoder = new Array(4)
      for (let i = 0; i < resolved.encoder.length; ++i) {
        if (msg.encoder.length > i) {
          resolved.encoder[i] = EncoderLinear.Resolve(msg.encoder[i]);
        }
        else {
          resolved.encoder[i] = new EncoderLinear();
        }
      }
    }
    else {
      resolved.encoder = new Array(4).fill(new EncoderLinear())
    }

    return resolved;
    }
};

// Constants for message
VehicleEncoder.Constants = {
  MOTOR: 0,
  FRONT_WHEEL_LEFT: 0,
  FRONT_WHEEL_RIGHT: 1,
  REAR_WHEEL_LEFT: 2,
  REAR_WHEEL_RIGHT: 3,
}

module.exports = VehicleEncoder;
