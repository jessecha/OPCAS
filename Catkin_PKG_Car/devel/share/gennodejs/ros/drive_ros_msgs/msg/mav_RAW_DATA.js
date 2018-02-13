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

class mav_RAW_DATA {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.channel = null;
      this.data = null;
    }
    else {
      if (initObj.hasOwnProperty('channel')) {
        this.channel = initObj.channel
      }
      else {
        this.channel = 0;
      }
      if (initObj.hasOwnProperty('data')) {
        this.data = initObj.data
      }
      else {
        this.data = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_RAW_DATA
    // Serialize message field [channel]
    bufferOffset = _serializer.uint8(obj.channel, buffer, bufferOffset);
    // Serialize message field [data]
    bufferOffset = _arraySerializer.uint8(obj.data, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_RAW_DATA
    let len;
    let data = new mav_RAW_DATA(null);
    // Deserialize message field [channel]
    data.channel = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [data]
    data.data = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.data.length;
    return length + 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_RAW_DATA';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fe139ce95f69f25b7328e7afd6d8fcfe';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    uint8 channel
        uint8 CH_COMM0=0
        uint8 CH_COMM1=1
        uint8 CH_COMM2=2
        uint8 CH_COMM3=3
    uint8[] data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_RAW_DATA(null);
    if (msg.channel !== undefined) {
      resolved.channel = msg.channel;
    }
    else {
      resolved.channel = 0
    }

    if (msg.data !== undefined) {
      resolved.data = msg.data;
    }
    else {
      resolved.data = []
    }

    return resolved;
    }
};

// Constants for message
mav_RAW_DATA.Constants = {
  CH_COMM0: 0,
  CH_COMM1: 1,
  CH_COMM2: 2,
  CH_COMM3: 3,
}

module.exports = mav_RAW_DATA;
