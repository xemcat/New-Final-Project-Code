//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"
#include "servo_motor.h"
// #include "ldr_sensor.h"
#include "rgb_led.h"

#define DUTY_MIN 0.025
#define DUTY_MAX 0.09 
#define PERIOD 0.02

PwmOut servo(PF_9);


DigitalOut testLED(LED2);   //can be used in the code below to test if code runs in this module

//servo_doorInit: changed from the servo_gateInit. Closes the door (move to original position)
void servo_doorInit()        
{
    rgbLedInit();
    servo.period(PERIOD);
    servo.write(DUTY_MIN);
}

//opens door for 10 seconds; the function that calls openDoor should also call servo_doorInit to close the door 
void openDoor() //changed from raiseGate
{
    //toGreenRgbLed();
    servo.write(DUTY_MAX);  
    delay(10000);
}
