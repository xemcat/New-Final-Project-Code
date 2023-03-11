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

bool rLdrStateRead() // checks the state of the LDR
{         //new
    return rLdrState;         //new
}

bool gLdrStateRead() // checks the ldr senso state connected to the green LED
{     //new
    return gLdrState;
}

float ldrSensorRead(){ // read the ldr sensor values for the entryway LED
    return eldr.read();
}

float gldrSensorRead(){ // read the ldr sensor values for the green LED
    return gldr.read();
    gLdrState = ON;   //new
}

float rldrSensorRead(){ // read the ldr sensor values for the red LED
    return rldr.read();
    rLdrState = ON;  
}
