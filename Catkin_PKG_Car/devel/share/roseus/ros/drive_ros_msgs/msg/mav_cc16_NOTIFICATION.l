;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_NOTIFICATION)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_NOTIFICATION (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_NOTIFICATION.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(defconstant drive_ros_msgs::mav_cc16_NOTIFICATION::*ID* 0)
(intern "*NOTIFICATION_TYPE_DEBUG*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(shadow '*NOTIFICATION_TYPE_DEBUG* (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(defconstant drive_ros_msgs::mav_cc16_NOTIFICATION::*NOTIFICATION_TYPE_DEBUG* 0)
(intern "*NOTIFICATION_TYPE_INFO*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(shadow '*NOTIFICATION_TYPE_INFO* (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(defconstant drive_ros_msgs::mav_cc16_NOTIFICATION::*NOTIFICATION_TYPE_INFO* 1)
(intern "*NOTIFICATION_TYPE_WARNING*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(shadow '*NOTIFICATION_TYPE_WARNING* (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(defconstant drive_ros_msgs::mav_cc16_NOTIFICATION::*NOTIFICATION_TYPE_WARNING* 2)
(intern "*NOTIFICATION_TYPE_CRITICAL*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(shadow '*NOTIFICATION_TYPE_CRITICAL* (find-package "DRIVE_ROS_MSGS::MAV_CC16_NOTIFICATION"))
(defconstant drive_ros_msgs::mav_cc16_NOTIFICATION::*NOTIFICATION_TYPE_CRITICAL* 3)
(defclass drive_ros_msgs::mav_cc16_NOTIFICATION
  :super ros::object
  :slots (_header _sysid _compid _type _description _tag ))

(defmethod drive_ros_msgs::mav_cc16_NOTIFICATION
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:type __type) 0)
    ((:description __description) (make-array 50 :initial-element 0 :element-type :integer))
    ((:tag __tag) (make-array 30 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _type (round __type))
   (setq _description __description)
   (setq _tag __tag)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:description
   (&optional __description)
   (if __description (setq _description __description)) _description)
  (:tag
   (&optional __tag)
   (if __tag (setq _tag __tag)) _tag)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint8 _type
    1
    ;; char[50] _description
    (* 1    50)
    ;; char[30] _tag
    (* 1    30)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _sysid
       (write-byte _sysid s)
     ;; uint8 _compid
       (write-byte _compid s)
     ;; uint8 _type
       (write-byte _type s)
     ;; char[50] _description
     (dotimes (i 50)
       (write-byte (elt _description i) s)
       )
     ;; char[30] _tag
     (dotimes (i 30)
       (write-byte (elt _tag i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _type
     (setq _type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; char[50] _description
   (dotimes (i (length _description))
     (setf (elt _description i) (sys::peek buf ptr- :char)) (incf ptr- 1)
     )
   ;; char[30] _tag
   (dotimes (i (length _tag))
     (setf (elt _tag i) (sys::peek buf ptr- :char)) (incf ptr- 1)
     )
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_NOTIFICATION :md5sum-) "4343ec807a104fe1e21a2558c07a365a")
(setf (get drive_ros_msgs::mav_cc16_NOTIFICATION :datatype-) "drive_ros_msgs/mav_cc16_NOTIFICATION")
(setf (get drive_ros_msgs::mav_cc16_NOTIFICATION :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452630
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

")



(provide :drive_ros_msgs/mav_cc16_NOTIFICATION "4343ec807a104fe1e21a2558c07a365a")


