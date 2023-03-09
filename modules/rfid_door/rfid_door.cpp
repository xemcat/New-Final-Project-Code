//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"

#include "entryway.h"
#include "ldr_sensor.h"
#include "smart_home_system.h"
#include "servo_motor.h"
#include "rgb_led.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

// DigitalOut entrywayLight(PE_10);
//DigitalInOut piezzo(PC_8);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============
static bool doorStatus = OFF;
//=====[Declaration and initialization of private global variables]============


void doorInit();
void doorUpdate();
//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void doorInit(){
    doorStatus = OFF;
}  

bool doorStateRead(){
    return doorStatus;
}

void doorUpdate(){
    ldrSensorUpdate();
    if(gldrSensorRead()==true){
        toGreenRgbLed();
        openDoor();
        servo_doorInit();
        doorStatus=ON;
    }
}

//=====[Implementations of private functions]==================================

 
