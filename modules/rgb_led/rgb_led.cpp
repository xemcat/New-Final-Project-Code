//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"
#include "rgb_led.h"
#include "smart_home_system.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalOut r(PA_0);
DigitalOut g(PD_12);
DigitalOut b(PB_4);
DigitalOut rgbLED[] = {r,b,g};

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============
void rgbLedInit();
void toGreenRgbLed();
void toredRgbLed();
//=====[Declaration and initialization of private global variables]============


//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

// initialize
void rgbLedInit(){
    toredRgbLed();
}

// turn only the green LED on
void toGreenRgbLed(){
    r = 0.0;
    g = 1.0;
    b = 0.0;
}
// turns only the red LED on
void toredRgbLed(){
    r = 1.0;
    g = 0.0;
    b = 0.0;
}

//=====[Implementations of private functions]==================================
