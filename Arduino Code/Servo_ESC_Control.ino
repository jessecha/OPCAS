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
#define MOTOR_PIN 12
#define MOTOR_PIN_TWO 13
Servo servo;
Servo motor;
int value = 0;
int motorplacement = 0;
///////////////
///// ROS /////
///////////////

// Instantiate the node handle
ros::NodeHandle nh ;

///////////////////
// Send throttle //
///////////////////
std_msgs::UInt16 throttle;
ros::Publisher Get_ESP_Throttle_publisher("Get_ESP_Throttletwo", &throttle);

///////////////////
//Calibrate Servo//
///////////////////

void servo_cb(const std_msgs::UInt16 &smd_msg) {

  servo.write(smd_msg.data); //set servo angle
  digitalWrite(12, HIGH - digitalRead(12)); //toggle led
}
ros::Subscriber<std_msgs::UInt16> sub("servotwo", servo_cb);

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
ros::Subscriber<std_msgs::Empty> Calibrate_ESP_subscriber("Calibrate_ESPtwo", ESC_calibration);


//////////////////
// Set throttle //
//////////////////
void ESC_control( const std_msgs::UInt16 &cmd_msg) {
  //int PWM = map(cmd_msg.data, 0, 5000, MOTOR_MIN_PWM, MOTOR_MAX_PWM);
  //motor.write(PWM);
  motor.write(cmd_msg.data);
}
ros::Subscriber<std_msgs::UInt16> Set_ESP_Throttle_subscriber("Set_ESP_Throttletwo", ESC_control);



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
  motor.attach(MOTOR_PIN);
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
    ///////////////
    ///// ROS /////
    ///////////////
    // Update every topic in both directions
    ///////////////
    ///// ESC /////
    ///////////////
    nh.spinOnce();
    throttle.data = motor.read();
    if (motorplacement != 0)
    {
      throttle.data = motorplacement;
    }
    else
    {
      throttle.data = 1502;
    }
    motorplacement = 0;
    delay(10);
    
    ///////////////
    //// servo ////
    ///////////////
    servo.attach(MOTOR_PIN_TWO);
    nh.subscribe(sub);


  }
}







