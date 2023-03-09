//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"

#include "ldr_sensor.h"

#include "smart_home_system.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

AnalogIn eldr(A2);
AnalogIn gldr(A3);
AnalogIn rldr(A4);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============
static bool rLdrState = OFF;  // new
static bool gLdrState = OFF;  // new

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================


//=====[Implementations of private functions]==================================

void ldrSensorInit(){}

void ldrSensorUpdate(){}

bool rLdrStateRead()
{         //new
    return rLdrState;         //new
}

bool gLdrStateRead()
{     //new
    return gLdrState;
}

float ldrSensorRead(){
    return eldr.read();
}

float gldrSensorRead(){
    return gldr.read();
    gLdrState = ON;   //new
}

float rldrSensorRead(){
    return rldr.read();
    rLdrState = ON;  ///new
}
