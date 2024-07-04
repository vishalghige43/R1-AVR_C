/*----AVR Header Files----*/
#include <avr/io.h>
#include <util/delay.h>

/*----Red Gear Header Files-----*/
#include <XBOXUSB.h>
#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

USB Usb;
XBOXUSB Xbox(&Usb);

/*-----Servo and BLDC ---------*/
#include <Servo.h>
Servo SeedlingServo_1,SeedlingServo_2,SeedlingServo_3,SeedlingServo_4,bldc_1,bldc_2;

//===========================================//

/*-----Defining pinouts & Const Val for LOCO-Motor-----*/
#define mPinFL PH5
#define mPinFR PB5
#define mPinBL PB4
#define mPinBR PH6
#define dirFL PA5
#define dirFR PC4
#define dirBL PA7
#define dirBR PC6

#define forward 0
#define backward 1

uint8_t front=1;

uint32_t FL_motor=0;
uint32_t FR_motor=0;
uint32_t BL_motor=0;
uint32_t BR_motor=0;

uint32_t extraSpeed=0;
uint32_t locoSpeed = 100; 

#define Pin_1  PA1
#define Pin_2  PA3

uint32_t sensorValue_1;
uint32_t sensorValue_2;
uint32_t moto_speed = 40;


/*-----Defining pinouts & Const Val for BLDC Motor-----*/

#define ServoPin_1 PE3
#define ServoPin_2 PG5
#define ServoPin_3 PB7
#define ServoPin_4 PE4 
#define BldcPin_1 PH3

uint8_t bldcSpeed=50; 
uint8_t servoOpenAngle=10,servoCloseAngle=50;
uint8_t seedPos=0;

/*-----Defining pinouts & Const Val Ball Gripper Motors-----*/


// #define BallFlipMotorDir 39
// #define BallFlipMotorPwm 2

// #define BallGripperMotorDir 38
// #define BallGripperMotorPwm 13


#define hatVal (Xbox.getAnalogHat(LeftHatX) > 7500 || Xbox.getAnalogHat(LeftHatX) < -7500 || Xbox.getAnalogHat(LeftHatY) > 7500 || Xbox.getAnalogHat(LeftHatY) < -7500 || Xbox.getAnalogHat(RightHatX) > 7500 || Xbox.getAnalogHat(RightHatX) < -7500)

uint8_t gripperSpeed=100,flipSpeed=100;

/*-----Defining pinouts & Const Val Pnuematic-----*/

#define shootPnuematic 3

/*-----Defining pinouts & Const Val Stepper-----*/

#define shootPnuematic PE5
#define dirPin PC0
#define stepPin PB6
#define stepsPerRevolution 3200  

//=======================================================//
