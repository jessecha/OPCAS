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

class mav_cc16_CONTROL_COMMAND {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sysid = null;
      this.compid = null;
      this.velocity = null;
      this.steering_front = null;
      this.steering_rear = null;
      this.indicator_left = null;
      this.indicator_right = null;
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
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = 0.0;
      }
      if (initObj.hasOwnProperty('steering_front')) {
        this.steering_front = initObj.steering_front
      }
      else {
        this.steering_front = 0.0;
      }
      if (initObj.hasOwnProperty('steering_rear')) {
        this.steering_rear = initObj.steering_rear
      }
      else {
        this.steering_rear = 0.0;
      }
      if (initObj.hasOwnProperty('indicator_left')) {
        this.indicator_left = initObj.indicator_left
      }
      else {
        this.indicator_left = 0;
      }
      if (initObj.hasOwnProperty('indicator_right')) {
        this.indicator_right = initObj.indicator_right
      }
      else {
        this.indicator_right = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mav_cc16_CONTROL_COMMAND
    // Serialize message field [sysid]
    bufferOffset = _serializer.uint8(obj.sysid, buffer, bufferOffset);
    // Serialize message field [compid]
    bufferOffset = _serializer.uint8(obj.compid, buffer, bufferOffset);
    // Serialize message field [velocity]
    bufferOffset = _serializer.float32(obj.velocity, buffer, bufferOffset);
    // Serialize message field [steering_front]
    bufferOffset = _serializer.float32(obj.steering_front, buffer, bufferOffset);
    // Serialize message field [steering_rear]
    bufferOffset = _serializer.float32(obj.steering_rear, buffer, bufferOffset);
    // Serialize message field [indicator_left]
    bufferOffset = _serializer.uint8(obj.indicator_left, buffer, bufferOffset);
    // Serialize message field [indicator_right]
    bufferOffset = _serializer.uint8(obj.indicator_right, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mav_cc16_CONTROL_COMMAND
    let len;
    let data = new mav_cc16_CONTROL_COMMAND(null);
    // Deserialize message field [sysid]
    data.sysid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [compid]
    data.compid = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [velocity]
    data.velocity = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steering_front]
    data.steering_front = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steering_rear]
    data.steering_rear = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [indicator_left]
    data.indicator_left = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [indicator_right]
    data.indicator_right = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/mav_cc16_CONTROL_COMMAND';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'db3d4778273e5bde28a0418e456620d4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Automatically Generated in 2017-06-12 22:33:47.452827
    # MESSAGE: CONTROL_COMMAND
    # Description: Control command data
    uint8 ID = 64
    uint8 sysid
    uint8 compid
    
    float32 velocity            # Desired velocity [m/s]
    float32 steering_front      # Front axle steering angle [rad]
    float32 steering_rear       # Rear axle steering angle [rad]
    uint8 indicator_left        # Left turn signal indicator
    uint8 indicator_right       # Right turn signal indicator
    
    uint8 INDICATOR_OFF = 0 # turn indicator off
    uint8 INDICATOR_ON  = 1 # turn indicator on
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mav_cc16_CONTROL_COMMAND(null);
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

    if (msg.velocity !== undefined) {
      resolved.velocity = msg.velocity;
    }
    else {
      resolved.velocity = 0.0
    }

    if (msg.steering_front !== undefined) {
      resolved.steering_front = msg.steering_front;
    }
    else {
      resolved.steering_front = 0.0
    }

    if (msg.steering_rear !== undefined) {
      resolved.steering_rear = msg.steering_rear;
    }
    else {
      resolved.steering_rear = 0.0
    }

    if (msg.indicator_left !== undefined) {
      resolved.indicator_left = msg.indicator_left;
    }
    else {
      resolved.indicator_left = 0
    }

    if (msg.indicator_right !== undefined) {
      resolved.indicator_right = msg.indicator_right;
    }
    else {
      resolved.indicator_right = 0
    }

    return resolved;
    }
};

// Constants for message
mav_cc16_CONTROL_COMMAND.Constants = {
  ID: 64,
  INDICATOR_OFF: 0,
  INDICATOR_ON: 1,
}

module.exports = mav_cc16_CONTROL_COMMAND;
