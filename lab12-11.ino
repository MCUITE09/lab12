#include <SoftwareSerial.h>
SoftwareSerial Serial1(10,11); // RX, TX
void setup(){
Serial1.begin(115200);  
Serial.begin(9600); 
Serial.println("START");
}
void loop(){
if (Serial1.available()) 
 {
   Serial.write(Serial1.read());
 }
if (Serial.available())
 {
   char chars=Serial.read();
   Serial1.write(chars);
 }
}


