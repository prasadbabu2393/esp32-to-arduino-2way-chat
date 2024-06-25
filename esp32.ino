
#include "HardwareSerial.h"
HardwareSerial mySerial(2);  // Use UART1

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600, SERIAL_8N1, 16, 17); 
}

void loop() {
  // put your main code here, to run repeatedly:
while (mySerial.available() > 0)
{
  Serial.print("esp\n");
  String msg = mySerial.readString();
  Serial.println(msg);
}
if(Serial.available() > 0)
{
  String msg1 = Serial.readString(); 
  mySerial.print(msg1);
}
}
