// Auto-generated. Do not edit!

// (in-package drive_ros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class mav_cc16_CONTROL_LIGHTS {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sysid = null;
      this.compid = null;
      this.colors = null;
    }
    else {
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
      if (initObj.hasOwnProperty('colors')) {
        this.colors = initObj.colors
      }
      else {
        this.colors = new Array(15).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_CONTROL_LIGHTS
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Check that the constant length array field [colors] has the right length
    if (obj.colors.length !== 15) {
      throw new Error('Unable to serialize array field colors - length must be 15')
    }
    // Serialize message field [colors]
    bufferOffset = _arraySerializer.uint32(obj.colors, buffer, bufferOffset, 15);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_CONTROL_LIGHTS
    let len;
    let data = new mav_cc16_CONTROL_LIGHTS(null);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [colors]
    data.colors = _arrayDeserializer.uint32(buffer, bufferOffset, 15)
    return data;
  }

  static getMessageSize(object) {
    return 62;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_CONTROL_LIGHTS';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8d6b19f83df7d1d5d31de59ee6e1ece9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.452797
    # MESSAGE: CONTROL_LIGHTS
    # Description:RGB lights
    uint8 ID = 32
    uint8 sysid
    uint8 compid
    
    uint32[15] colors   # Colors-4 bytes, r,g,b, nothing
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_CONTROL_LIGHTS(null);
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

    if (msg.colors !== undefined) {
      resolved.colors = msg.colors;
    }
    else {
      resolved.colors = new Array(15).fill(0)
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_CONTROL_LIGHTS.Constants = {
  ID: 32,
}

module.exports = mav_cc16_CONTROL_LIGHTS;
