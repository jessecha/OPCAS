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

class mav_cc16_CONFIG_PARAM_SET_BOOL {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sysid = null;
      this.compid = null;
      this.config_id = null;
      this.param_id = null;
      this.value = null;
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
      if (initObj.hasOwnProperty('value')) {
        this.value = initObj.value
      }
      else {
        this.value = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_CONFIG_PARAM_SET_BOOL
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [config_id]
    bufferOffset = _serializer.uint8(obj.config_id, buffer, bufferOffset);
    // Serialize message field [param_id]
    bufferOffset = _serializer.uint8(obj.param_id, buffer, bufferOffset);
    // Serialize message field [value]
    bufferOffset = _serializer.uint8(obj.value, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_CONFIG_PARAM_SET_BOOL
    let len;
    let data = new mav_cc16_CONFIG_PARAM_SET_BOOL(null);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [config_id]
    data.config_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [param_id]
    data.param_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [value]
    data.value = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_BOOL';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '201091ac52e82b29670be63faf14daef';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.453220
    # MESSAGE: CONFIG_PARAM_SET_BOOL
    # Description:Set new config parameter bool value
    uint8 ID = 201
    uint8 sysid
    uint8 compid
    
    uint8 config_id     # ID of the configuration set
    uint8 param_id      # ID of the configuration parameter within the config set
    uint8 value         # New parameter value
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_CONFIG_PARAM_SET_BOOL(null);
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

    if (msg.value !== undefined) {
      resolved.value = msg.value;
    }
    else {
      resolved.value = 0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_CONFIG_PARAM_SET_BOOL.Constants = {
  ID: 201,
}

module.exports = mav_cc16_CONFIG_PARAM_SET_BOOL;
