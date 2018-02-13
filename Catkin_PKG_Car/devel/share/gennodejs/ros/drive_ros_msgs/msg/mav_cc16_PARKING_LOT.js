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

class mav_cc16_PARKING_LOT {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.sysid = null;
      this.compid = null;
      this.parking_lot_size = null;
      this.parking_lot_position = null;
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
      if (initObj.hasOwnProperty('parking_lot_size')) {
        this.parking_lot_size = initObj.parking_lot_size
      }
      else {
        this.parking_lot_size = 0.0;
      }
      if (initObj.hasOwnProperty('parking_lot_position')) {
        this.parking_lot_position = initObj.parking_lot_position
      }
      else {
        this.parking_lot_position = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_PARKING_LOT
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [parking_lot_size]
    bufferOffset = _serializer.float32(obj.parking_lot_size, buffer, bufferOffset);
    // Serialize message field [parking_lot_position]
    bufferOffset = _serializer.float32(obj.parking_lot_position, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_PARKING_LOT
    let len;
    let data = new mav_cc16_PARKING_LOT(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [parking_lot_size]
    data.parking_lot_size = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [parking_lot_position]
    data.parking_lot_position = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 10;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_PARKING_LOT';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4b449dea5df2bf4f6c8248aa0725add9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.453020
    # MESSAGE: PARKING_LOT
    # Description:Parking Lot Sensor
    Header header
    
    uint8 ID = 150
    uint8 sysid
    uint8 compid
    
    float32 parking_lot_size        # Size of the parking lot [m]
    float32 parking_lot_position    # Position of the second edge of the parking lot [m]
    
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
    const resolved = new mav_cc16_PARKING_LOT(null);
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

    if (msg.parking_lot_size !== undefined) {
      resolved.parking_lot_size = msg.parking_lot_size;
    }
    else {
      resolved.parking_lot_size = 0.0
    }

    if (msg.parking_lot_position !== undefined) {
      resolved.parking_lot_position = msg.parking_lot_position;
    }
    else {
      resolved.parking_lot_position = 0.0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_PARKING_LOT.Constants = {
  ID: 150,
}

module.exports = mav_cc16_PARKING_LOT;
