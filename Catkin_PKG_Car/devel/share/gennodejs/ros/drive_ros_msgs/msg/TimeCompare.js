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

class TimeCompare {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.time_1 = null;
      this.time_2 = null;
      this.diff_time = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('time_1')) {
        this.time_1 = initObj.time_1
      }
      else {
        this.time_1 = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('time_2')) {
        this.time_2 = initObj.time_2
      }
      else {
        this.time_2 = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('diff_time')) {
        this.diff_time = initObj.diff_time
      }
      else {
        this.diff_time = {secs: 0, nsecs: 0};
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TimeCompare
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [time_1]
    bufferOffset = _serializer.time(obj.time_1, buffer, bufferOffset);
    // Serialize message field [time_2]
    bufferOffset = _serializer.time(obj.time_2, buffer, bufferOffset);
    // Serialize message field [diff_time]
    bufferOffset = _serializer.duration(obj.diff_time, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TimeCompare
    let len;
    let data = new TimeCompare(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [time_1]
    data.time_1 = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [time_2]
    data.time_2 = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [diff_time]
    data.diff_time = _deserializer.duration(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/TimeCompare';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'dc58cdcc02bacea924ddf264cf2cf618';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Debug Message
    Header header
    
    time time_1
    time time_2
    duration diff_time
    
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
    const resolved = new TimeCompare(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.time_1 !== undefined) {
      resolved.time_1 = msg.time_1;
    }
    else {
      resolved.time_1 = {secs: 0, nsecs: 0}
    }

    if (msg.time_2 !== undefined) {
      resolved.time_2 = msg.time_2;
    }
    else {
      resolved.time_2 = {secs: 0, nsecs: 0}
    }

    if (msg.diff_time !== undefined) {
      resolved.diff_time = msg.diff_time;
    }
    else {
      resolved.diff_time = {secs: 0, nsecs: 0}
    }

    return resolved;
    }
};

module.exports = TimeCompare;
