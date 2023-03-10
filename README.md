
# Emma Watson, Delvin Marimo, Muhammed Memon

## Advanced Smart Home Security System
## 10 March 2023


## A summary of the behavior of this code in your system

The main function of our software is to provide an advanced security system to a smart home. From the armBookCodeExamples, example 2 already has code for setting off the alarm if there is things like an over Temperature detection or gas detection inside the house. From this code, we added new behaviours to our system. Basically, when an RFID card is scanned, the code will check if it is the correct tag stored in our system. if the tag is correct, the door to our smart home is opened by rotating a servo motor. When the door is unlocked, a green LED is turned on to indicate that the door is open. In the event that the tag scanned is wrong, a red LED stays on and a buzzer is set off for 10 seconds. When it is at night, an antryway LED light is turned on for visibility near the door.  


## A list of the code modules. For each module give a brief description of what the module does. If the code is a) written from scratch, b) based on textbook code or c) based on code found online
##Modules added


## A list of the hardware components connected to the Nucleo board, and the pins for each component



## A description of the tests you performed on the system, and the results.



## Any other details that will help the reader understand your code
