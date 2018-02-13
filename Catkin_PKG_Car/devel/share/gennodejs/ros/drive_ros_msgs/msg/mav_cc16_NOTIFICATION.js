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

class mav_cc16_NOTIFICATION {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.sysid = null;
      this.compid = null;
      this.type = null;
      this.description = null;
      this.tag = null;
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
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = 0;
      }
      if (initObj.hasOwnProperty('description')) {
        this.description = initObj.description
      }
      else {
        this.description = new Array(50).fill(0);
      }
      if (initObj.hasOwnProperty('tag')) {
        this.tag = initObj.tag
      }
      else {
        this.tag = new Array(30).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_NOTIFICATION
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [type]
    bufferOffset = _serializer.uint8(obj.type, buffer, bufferOffset);
    // Check that the constant length array field [description] has the right length
    if (obj.description.length !== 50) {
      throw new Error('Unable to serialize array field description - length must be 50')
    }
    // Serialize message field [description]
    bufferOffset = _arraySerializer.char(obj.description, buffer, bufferOffset, 50);
    // Check that the constant length array field [tag] has the right length
    if (obj.tag.length !== 30) {
      throw new Error('Unable to serialize array field tag - length must be 30')
    }
    // Serialize message field [tag]
    bufferOffset = _arraySerializer.char(obj.tag, buffer, bufferOffset, 30);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_NOTIFICATION
    let len;
    let data = new mav_cc16_NOTIFICATION(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [type]
    data.type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [description]
    data.description = _arrayDeserializer.char(buffer, bufferOffset, 50)
    // Deserialize message field [tag]
    data.tag = _arrayDeserializer.char(buffer, bufferOffset, 30)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 83;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_NOTIFICATION';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4343ec807a104fe1e21a2558c07a365a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.452630
    # MESSAGE: NOTIFICATION
    # Description:Sends a notification to the app
    Header header
    
    uint8 ID = 0
    uint8 sysid
    uint8 compid
    
    uint8 type              # Type of the notification (see enum NOTIFICATION_TYPE)
    char[50] description    # Notification
    char[30] tag            # Tag
    
    uint8 NOTIFICATION_TYPE_DEBUG = 0             # Debug Notification
    uint8 NOTIFICATION_TYPE_INFO = 1              # Info Notification
    uint8 NOTIFICATION_TYPE_WARNING = 2           # Warning Notification
    uint8 NOTIFICATION_TYPE_CRITICAL = 3          # Critical Notification
    
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
    const resolved = new mav_cc16_NOTIFICATION(null);
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

    if (msg.type !== undefined) {
      resolved.type = msg.type;
    }
    else {
      resolved.type = 0
    }

    if (msg.description !== undefined) {
      resolved.description = msg.description;
    }
    else {
      resolved.description = new Array(50).fill(0)
    }

    if (msg.tag !== undefined) {
      resolved.tag = msg.tag;
    }
    else {
      resolved.tag = new Array(30).fill(0)
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_NOTIFICATION.Constants = {
  ID: 0,
  NOTIFICATION_TYPE_DEBUG: 0,
  NOTIFICATION_TYPE_INFO: 1,
  NOTIFICATION_TYPE_WARNING: 2,
  NOTIFICATION_TYPE_CRITICAL: 3,
}

module.exports = mav_cc16_NOTIFICATION;
