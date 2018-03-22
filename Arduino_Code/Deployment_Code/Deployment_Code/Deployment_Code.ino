/*******************************************************************
  File:     FinalArduinoCode.ino
  Author:   Jesse Cha
  Time:     2017/02/01
  Contact:  e.cha@cranfield.ac.uk
  License:  GPL
  About:

  Note: Servo PWM is on Pin 12 and ESC PWM is on Pin 13
        <ROS COMMANDS>
        1 - roscore
        2 - rosrun rosserial_python serial_node.py /dev/ttyACM0
        3 - rostopic pub /Set_ESP_Throttle std_msgs/UInt16 0 ~ 30-50 ~ 100
        4 - rostopic pub /servo std_msgs/UInt16 60 ~ 100 ~ 125
*********************************************************************/

#include "Arduino.h"
#include <ros.h>

#include <std_msgs/UInt16.h>
#include <std_msgs/Empty.h>
#include <Servo.h>
#define BAUDRATE 115200

#define MOTOR_MAX_PWM 1000 //1792
#define MOTOR_MIN_PWM 2000 //959
#define MOTOR_NO_SIGNAL_PWM 1500 //1371
#define PIN_STEER 11 
#define PIN_THROTTLE 10
#define PIN_BRAKE 9
#define PIN_TILT 3
#define PIN_PAN 5

Servo servo;
Servo pan;
Servo tilt;
Servo motor;
Servo reversemotor;
Servo brake;

int reverse = 0;

///////////////
///// ROS /////
///////////////

// Instantiate the node handle
ros::NodeHandle nh ;

///////////////////
// Send throttle //
///////////////////
std_msgs::UInt16 throttle;
ros::Publisher Get_ESP_Throttle_publisher("Throttle", &throttle);

///////////////////
//Calibrate Servo//
///////////////////

void steering(const std_msgs::UInt16 &smd_msgone) {
  servo.write(smd_msgone.data); //set servo angle
}
ros::Subscriber<std_msgs::UInt16> subone("Steering", steering);

void headtracking_pan(const std_msgs::UInt16 &smd_msgtwo) {
  pan.write(smd_msgtwo.data); //set servo angle
}
ros::Subscriber<std_msgs::UInt16> subtwo("Set_Pan", headtracking_pan);

void headtracking_tilt(const std_msgs::UInt16 &smd_msgthree) {
  tilt.write(smd_msgthree.data); //set servo angle
}
ros::Subscriber<std_msgs::UInt16> subthree("Set_Tilt", headtracking_tilt);

///////////////////
// Calibrate ESC //
///////////////////
void ESC_calibration(const std_msgs::Empty &toggle_msg) {
  // Send max output
  motor.write(MOTOR_MAX_PWM);
  delay(1000);
  // Send min output
  motor.write(MOTOR_NO_SIGNAL_PWM);
  delay(3000);
  // Send min range value
  motor.write(MOTOR_MIN_PWM);
  delay(5000);
}
ros::Subscriber<std_msgs::Empty> Calibrate_ESP_subscriber("Throttle_Calibration", ESC_calibration);


//////////////////
// Set throttle //
//////////////////
void ESC_control( const std_msgs::UInt16 &cmd_msg_one) {
  motor.write(cmd_msg_one.data);
}
ros::Subscriber<std_msgs::UInt16> Set_ESP_Throttle_subscriber("Throttle", ESC_control);

void ESC_reverse_control( const std_msgs::UInt16 &cmd_msg_two) {
  reversemotor.write(cmd_msg_two.data);
}
ros::Subscriber<std_msgs::UInt16> Set_ESP_Brake_subscriber("Braking", ESC_reverse_control);


void setup() {
  //TIMSK0=0;
  Serial.begin(BAUDRATE);

  ///////////////
  ///// ROS /////
  ///////////////
  nh.getHardware()->setBaud(BAUDRATE);
  nh.initNode() ;  // Initialisation of the node
  nh.subscribe(Calibrate_ESP_subscriber);
  nh.subscribe(Set_ESP_Throttle_subscriber);
  nh.advertise(Get_ESP_Throttle_publisher);

  ///////////////
  //ESC Arming///
  ///////////////
  motor.attach(PIN_THROTTLE);
  motor.write(MOTOR_MIN_PWM);
  motor.write(1480);
  delay(500);
  motor.write(1481);
  delay(500);
  motor.write(1482);
  delay(500);
  motor.write(1483);
  delay(500);
  motor.write(1484);
  delay(500);
  motor.write(1485);
  delay(500);

}

void loop() {
  while (true) {
    nh.spinOnce();
    reverse = reversemotor.read();
    if (reverse > 1490)
    {
      throttle.data = motor.read();
    }
    else
    {
      throttle.data = reversemotor.read();
    }    
    nh.subscribe(subone);
    
    nh.subscribe(subtwo);
  
    nh.subscribe(subthree);
    
    servo.attach(PIN_STEER);
    
    pan.attach(PIN_PAN);
    servo.attach(PIN_STEER);
    tilt.attach(PIN_TILT);
    servo.attach(PIN_STEER);
  }
}







