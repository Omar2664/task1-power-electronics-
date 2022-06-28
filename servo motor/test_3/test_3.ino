#include <Servo.h>
Servo motor;
int pos1 = 0;

void setup() {
motor.attach(10);


}

void loop()
{
for(pos1=0 ; pos1 < 90; pos1 +=1)
 { 
  motor.write(pos1);
  delay(10);
 }
 for(pos1 =90; pos1>=1; pos1-=1)
 {motor.write(pos1);
 delay(10);
 
}
}
