
#include "SoftwareSerial.h"
SoftwareSerial mySerial (5,6);  //rx tx

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (mySerial.available() > 0)
{
  Serial.print("ard\n");
  String msg = mySerial.readStringUntil("\n");
  Serial.println(msg);
}
if(Serial.available() > 0)
{
  String msg1 =Serial.readString();
  mySerial.print(msg1);
}
}
