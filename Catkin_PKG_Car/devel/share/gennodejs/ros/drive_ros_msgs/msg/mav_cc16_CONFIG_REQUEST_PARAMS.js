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

class mav_cc16_CONFIG_REQUEST_PARAMS {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sysid = null;
      this.compid = null;
      this.config_id = null;
      this.param_id = null;
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
      if (initObj.hasOwnProperty('config_id')) {
        this.config_id = initObj.config_id
      }
      else {
        this.config_id = 0;
      }
      if (initObj.hasOwnProperty('param_id')) {
        this.param_id = initObj.param_id
      }
      else {
        this.param_id = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_CONFIG_REQUEST_PARAMS
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [config_id]
    bufferOffset = _serializer.uint8(obj.config_id, buffer, bufferOffset);
    // Serialize message field [param_id]
    bufferOffset = _serializer.uint8(obj.param_id, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_CONFIG_REQUEST_PARAMS
    let len;
    let data = new mav_cc16_CONFIG_REQUEST_PARAMS(null);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [config_id]
    data.config_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [param_id]
    data.param_id = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_CONFIG_REQUEST_PARAMS';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5ce152efbf37c393d893fa9eb0dfbfab';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.453077
    # MESSAGE: CONFIG_REQUEST_PARAMS
    # Description:Request config parameter information
    uint8 ID = 194
    uint8 sysid
    uint8 compid
    
    uint8 config_id     # ID of the configuration set
    uint8 param_id      # ID of the config parameter within the set
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_CONFIG_REQUEST_PARAMS(null);
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

    if (msg.config_id !== undefined) {
      resolved.config_id = msg.config_id;
    }
    else {
      resolved.config_id = 0
    }

    if (msg.param_id !== undefined) {
      resolved.param_id = msg.param_id;
    }
    else {
      resolved.param_id = 0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_CONFIG_REQUEST_PARAMS.Constants = {
  ID: 194,
}

module.exports = mav_cc16_CONFIG_REQUEST_PARAMS;
