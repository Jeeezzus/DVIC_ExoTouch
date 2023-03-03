/*
 * LucidGloves Firmware Version 4
 * Author: Lucas_VRTech - LucidVR
 * lucidvrtech.com
 */

 //modified by Gauthier

#include "AdvancedConfig.h"

//This is the configuration file, main structure in _main.ino
//CONFIGURATION SETTINGS:
#define COMMUNICATION COMM_SERIAL //Which communication protocol to use
//serial over USB
  #define SERIAL_BAUD_RATE 115200
  
//serial over Bluetooth
  #define BTSERIAL_DEVICE_NAME "lucidgloves-Left"

//ANALOG INPUT CONFIG
#define FLIP_POTS  true  //Flip values from potentiometers (for fingers!) if they are backwards

//Gesture enables, make false to use button override
#define TRIGGER_GESTURE true
#define GRAB_GESTURE    true
#define PINCH_GESTURE   true


//BUTTON INVERT
//If a button registers as pressed when not and vice versa (eg. using normally-closed switches),
//you can invert their behaviour here by setting their line to true.
//If unsure, set to false
#define INVERT_A false
#define INVERT_B false
#define INVERT_JOY false
#define INVERT_MENU false
#define INVERT_CALIB false
//These only apply with gesture button override:
#define INVERT_TRIGGER false
#define INVERT_GRAB false
#define INVERT_PINCH false


//joystick configuration
#define JOYSTICK_BLANK true //make true if not using the joystick
#define JOY_FLIP_X false
#define JOY_FLIP_Y false
#define JOYSTICK_DEADZONE 10 //deadzone in the joystick to prevent drift (in percent)

#define NO_THUMB false //If for some reason you don't want to track the thumb

#define USING_CALIB_PIN false //When PIN_CALIB is shorted (or it's button pushed) it will reset calibration if this is on.

#define USING_FORCE_FEEDBACK false //Force feedback haptics allow you to feel the solid objects you hold
#define SERVO_SCALING true //dynamic scaling of servo motors

#if defined(ESP32)
  //(This configuration is for ESP32 DOIT V1 so make sure to change if you're on another board)
  #define PIN_PINKY     25 
  #define PIN_RING      33
  #define PIN_MIDDLE    32
  #define PIN_INDEX     35
  #define PIN_THUMB     34
  #define PIN_JOY_X     43
  #define PIN_JOY_Y     45
  #define PIN_JOY_BTN   46
  #define PIN_A_BTN     47 
  #define PIN_B_BTN     14
  #define PIN_TRIG_BTN  12 //unused if gesture set
  #define PIN_GRAB_BTN  13 //unused if gesture set
  #define PIN_PNCH_BTN  23 //unused if gesture set
  #define PIN_CALIB     100 //button for recalibration (You can set this to GPIO0 to use the BOOT button, but only when using Bluetooth.)
  #define DEBUG_LED 2
  #define PIN_PINKY_MOTOR     16  //used for force feedback
  #define PIN_RING_MOTOR      17 //^
  #define PIN_MIDDLE_MOTOR    5 //^
  #define PIN_INDEX_MOTOR     18 //^
  #define PIN_THUMB_MOTOR     19 //^
  #define PIN_MENU_BTN        27

#endif
