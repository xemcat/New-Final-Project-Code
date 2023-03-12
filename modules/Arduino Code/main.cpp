#include <SPI.h>
#include <RFID.h>

#define SS_PIN 10
#define RST_PIN 9

RFID rfid(SS_PIN, RST_PIN);
String rfidCard;
void setup() {
  Serial.begin(9600);
  Serial.println("Starting the RFID Reader...");
  SPI.begin();
  rfid.init();
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);  
}

//scans for the correct RFID 
void loop() {
  if (rfid.isCard()) {
    if (rfid.readCardSerial()) {
      rfidCard = String(rfid.serNum[0]) + " " + String(rfid.serNum[1]) + " " + String(rfid.serNum[2]) + " " + String(rfid.serNum[3]);
      if(rfidCard =="129 254 111 29" || rfidCard == "107 192 244 17"){
        digitalWrite(7, HIGH); //turns on the LED in the box 'G'
        delay(1000);
        digitalWrite(7, LOW);
      }
      else{
        digitalWrite(6,HIGH); //turns on the LED in the box 'R'
        delay(3000);
        digitalWrite(6, LOW);
        
      }
      Serial.println(rfidCard);
    }
    rfid.halt();
  }
}
