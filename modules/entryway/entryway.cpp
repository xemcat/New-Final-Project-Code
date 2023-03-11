//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"

#include "entryway.h"
#include "ldr_sensor.h"

#include "smart_home_system.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalOut entrywayLight(PE_10);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============



//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================



//=====[Implementations of private functions]==================================

void entrywayLightInit(){
    entrywayLight = OFF;
}

void entrywayLightUpdate(){
    ldrSensorUpdate();  // reads the sensor update
    if(ldrSensorRead()==true){     
        entrywayLight =OFF;      // checks the readin of the Ldr sensor, if it is below the threshold, the entrway LED turn OFf
    }else{
        entrywayLight=ON;
    }
}
