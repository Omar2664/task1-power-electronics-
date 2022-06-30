#include <ESP32Servo.h>
Servo servol;
int pos1 = 0;
int servopin=32;

void setup() {

servol.attach(servopin);
}

void loop()
{
for(pos1=0 ; pos1 < 180; pos1 +=1)
 { 
  servol.write(pos1);
  delay(15);
 }
 for(pos1 =180; pos1>=1; pos1-=1)
 {servol.write(pos1);
 delay(15);
 
}
}
