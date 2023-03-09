//=====[#include guards - begin]===============================================

#ifndef _LDR_SENSOR_H_
#define _LDR_SENSOR_H_

//=====[Declaration of public defines]=========================================

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

void ldrSensorInit();
void ldrSensorUpdate();
float ldrSensorRead();
float gldrSensorRead();
float rldrSensorRead();

//=====[#include guards - end]=================================================

#endif // _SIREN_H_
