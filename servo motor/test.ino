#include <Servo.h>
Servo servol;

void setup() {
servol.attach(10);
servol.write(180);
servol.write(0);
}

void loop() 
{


}
