
# Emma Watson, Delvin Marimo, Muhammed Farooq Memon

## Advanced Smart Home Security System
## 10 March 2023


## A summary of the behavior of this code in your system

The main function of our software is to provide an advanced security system to a smart home. From the armBookCodeExamples, example 6-2 already has code for setting off the alarm if there is things like an over Temperature detection or gas detection inside the house. From this code, we added new behaviours to our system. Basically, when an RFID card is scanned, the code will check if it is the correct tag stored in our system. if the tag is correct, the door to our smart home is opened by rotating a servo motor. When the door is unlocked, a green LED is turned on to indicate that the door is open. In the event that the tag scanned is wrong, a red LED stays on and a buzzer is set off for 10 seconds. When it is at night, an antryway LED light is turned on for visibility near the door.  


## A list of the code modules

### Modules Added

**rfid_door**: This module calls a function from ldr_sensor. It checks to see if the ldr sensor connected to the green LED is reading any values greater than the threshold value. If so, it instructs the servo motor to rotate by calling a function from servo motor module. the module also keeps track of the status of the door(open or close). This is written from scratch following examples from class exercises

**servo_motor**:The module has a function to rotate the servo motor to 145 degrees, delay for 10 seconds and then close the door. 

**ldr_sensor**: This module takes in readings from the three Ldr sensors. one ldr sensor to detect correct RFID tags, another to detect incorrect RFID tags and lastly to turn on/off the entryway LED light. 

**entryway**:  This module calls a function inside ldr sensor that reads the ldr sensor value for turning the entryway light ON when it is dark and OFF when it is dalight. 

**outPiezzo**: If there is an incorrect tag scanned, the ldr sensor value is read and this module sets off the piezzo buzzer to indicate that an incorrect tag has just been scanned

**rgb_led**: This module controls the led lights of an RGB LED. The RGB is set to values that turn completely red and completely green in different functions

**Aduino code**: The main module, scans the correct RFID tag. The RFID tag that is scanned is then compared to the data of correct RFID. If the correct RFID is detected, the appropriate LED is turned on. Contrarily, another LED will turn on if the wrong RFID is detected.


## A list of the hardware components connected to the Nucleo board, and the pins for each component

SERVO Motor:              PMW-PF9, GND-GND, 5V-5V

LM35 Temp sensor:               VCC-5V, OUT-PC0, GND-GND

PIEZO buzzer (outside):    5V-5V, OUT-PC8

PIEZO buzzer (inside):     5V-5V, OUT-PC9

ELDR ldr sensor:               PWR-5V, OUT-PC3

RLDR ldr sensor:               PWR-5V, OUT-PF5

GLDR ldr sensor:               PWR-5V, OUT-PF3

MQ2 gas sensor:                VCC-5V, GND-GND, DO-PE12

RFID (arduino):     SDA-10, SCK-13, MOSI-11, GND-GND, RST-9, 3.3V-3.3V


## A description of the tests performed on the system, and the results.
To test the entryway LED light, we placed a hand over the LDR sensor to provide some darkness. The entryway LED turned on when a hand was used to cover the ldr sensor and the LED turned off when the hand was removed.

To test the door functionaility, we had 6 different RFID tags all assigned with different strings. Only 2 tags were given the correct strings. we randomly scanned all the six tags and when the door only opened twice when the two correct tags were scanned. The other four times, the buzzer went off. 

The inside system was tested using a gas sensor. When a magic marker(alcohol) was brought closer to the gas sensor, the alarm went off and the serial monitor started printing GAS DETECTED. We also used sanitizer and a burning light. In all the instances, the alarm went off and the gas was being detected on the serial monitor

## Additional Information

We used two different boards, red board and STM35, to implement our project. The aduino red board was used to write code for the RFID scanner and all other functionalities were implemented using the nucleo board. To link the two boards, we used ldr sensors and LED lights. When a correct tag is scanned, a blue LED connected to the aduino circuit will turn on for 10 seconds triggering an LDR sensor connected to the nucleo board. Similar activity happens when a wrong tag is scanned. A red LED on the aduino circuit is turned on for 10 seconds triggering a different LDR sensor connected to the nucleo board. After that, all the functions connected to the nucleo board will start to be implemented.
