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

class mav_cc16_CONFIG_PARAM_BOOL {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sysid = null;
      this.compid = null;
      this.config_id = null;
      this.param_id = null;
      this.name = null;
      this.value = null;
      this.default_value = null;
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
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = new Array(30).fill(0);
      }
      if (initObj.hasOwnProperty('value')) {
        this.value = initObj.value
      }
      else {
        this.value = 0;
      }
      if (initObj.hasOwnProperty('default_value')) {
        this.default_value = initObj.default_value
      }
      else {
        this.default_value = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_CONFIG_PARAM_BOOL
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [config_id]
    bufferOffset = _serializer.uint8(obj.config_id, buffer, bufferOffset);
    // Serialize message field [param_id]
    bufferOffset = _serializer.uint8(obj.param_id, buffer, bufferOffset);
    // Check that the constant length array field [name] has the right length
    if (obj.name.length !== 30) {
      throw new Error('Unable to serialize array field name - length must be 30')
    }
    // Serialize message field [name]
    bufferOffset = _arraySerializer.char(obj.name, buffer, bufferOffset, 30);
    // Serialize message field [value]
    bufferOffset = _serializer.uint8(obj.value, buffer, bufferOffset);
    // Serialize message field [default_value]
    bufferOffset = _serializer.uint8(obj.default_value, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_CONFIG_PARAM_BOOL
    let len;
    let data = new mav_cc16_CONFIG_PARAM_BOOL(null);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [config_id]
    data.config_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [param_id]
    data.param_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [name]
    data.name = _arrayDeserializer.char(buffer, bufferOffset, 30)
    // Deserialize message field [value]
    data.value = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [default_value]
    data.default_value = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 36;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_CONFIG_PARAM_BOOL';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f69fc65033b547d535c6eb63d175db68';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.453148
    # MESSAGE: CONFIG_PARAM_BOOL
    # Description:Config parameter information for bool param
    uint8 ID = 198
    uint8 sysid
    uint8 compid
    
    uint8 config_id     # ID of the configuration set
    uint8 param_id      # ID of the configuration parameter within the config set
    char[30] name       # Name of the configuration parameter
    uint8 value         # Current parameter value
    uint8 default_value # Default parameter value
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_CONFIG_PARAM_BOOL(null);
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

    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = new Array(30).fill(0)
    }

    if (msg.value !== undefined) {
      resolved.value = msg.value;
    }
    else {
      resolved.value = 0
    }

    if (msg.default_value !== undefined) {
      resolved.default_value = msg.default_value;
    }
    else {
      resolved.default_value = 0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_CONFIG_PARAM_BOOL.Constants = {
  ID: 198,
}

module.exports = mav_cc16_CONFIG_PARAM_BOOL;
