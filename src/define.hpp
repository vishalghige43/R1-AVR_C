#include <avr/io.h>
#include <util/delay.h>
// #include "Servo/"


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

#define ServoPin_1 PE3
#define ServoPin_2 PG5
#define ServoPin_3 PB7
#define ServoPin_4 PE4 
#define BldcPin_1 PH3

uint8_t bldcSpeed=50; 
uint8_t servoOpenAngle=10,servoCloseAngle=50;
uint8_t seedPos=0;

#define hatVal (Xbox.getAnalogHat(LeftHatX) > 7500 || Xbox.getAnalogHat(LeftHatX) < -7500 || Xbox.getAnalogHat(LeftHatY) > 7500 || Xbox.getAnalogHat(LeftHatY) < -7500 || Xbox.getAnalogHat(RightHatX) > 7500 || Xbox.getAnalogHat(RightHatX) < -7500)

uint8_t gripperSpeed=100,flipSpeed=100;

#define shootPnuematic PE5
#define dirPin PC0
#define stepPin PB6
#define stepsPerRevolution 3200  