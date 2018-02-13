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

class mav_cc16_CONFIG_REQUEST_COUNT {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sysid = null;
      this.compid = null;
      this.dummy = null;
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
      if (initObj.hasOwnProperty('dummy')) {
        this.dummy = initObj.dummy
      }
      else {
        this.dummy = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_CONFIG_REQUEST_COUNT
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [dummy]
    bufferOffset = _serializer.uint8(obj.dummy, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_CONFIG_REQUEST_COUNT
    let len;
    let data = new mav_cc16_CONFIG_REQUEST_COUNT(null);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [dummy]
    data.dummy = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 3;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_CONFIG_REQUEST_COUNT';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c8bde82c47574bf9d3ab6bb685675a04';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.453037
    # MESSAGE: CONFIG_REQUEST_COUNT
    # Description:Request quantity/id information of configs
    uint8 ID = 192
    uint8 sysid
    uint8 compid
    
    uint8 dummy
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_CONFIG_REQUEST_COUNT(null);
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

    if (msg.dummy !== undefined) {
      resolved.dummy = msg.dummy;
    }
    else {
      resolved.dummy = 0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_CONFIG_REQUEST_COUNT.Constants = {
  ID: 192,
}

module.exports = mav_cc16_CONFIG_REQUEST_COUNT;
