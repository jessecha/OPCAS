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

Servo servo;;
Servo motor;
Servo reversemotor;
Servo brake;

int reverse = 0;
string serIn = "";
///////////////////
//Calibrate Servo//
///////////////////

void steering(const std_msgs::UInt16 &smd_msgone) {
  servo.write(smd_msgone.data); //set servo angle
}


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

//////////////////
// Set throttle //
//////////////////
void ESC_control( const std_msgs::UInt16 &cmd_msg_one) {
  motor.write(cmd_msg_one.data);
}
void ESC_reverse_control( const std_msgs::UInt16 &cmd_msg_two) {
  reversemotor.write(cmd_msg_two.data);
}


void setup() {
  //TIMSK0=0;
  Serial.begin(BAUDRATE);

  ///////////////
  //ESC Arming///
  ///////////////
  servo.attach(PIN_STEER);
  motor.attach(PIN_THROTTLE);
  motor.write(1489);
  delay(500);
  motor.write(1489);
  delay(500);
  motor.write(1489);
  delay(500);
  motor.write(1489);
  delay(500);
  motor.write(1489);
  delay(500);
  motor.write(1489);
  delay(500);

}
   
void loop() {
  while (true) {
    if (Serial.available()>0) {
    serIn=Serial.read()
    if (strlen(serIn) == 6) {
    motor.write(serIn.toInt() / 100);    
    servo.write(serIn.toInt() % 100);
    }
    if (strlen(serIn) == 7) {
    motor.write(serIn.toInt() / 1000);    
    servo.write(serIn.toInt() % 1000);  
    }
    }  
  }
}







