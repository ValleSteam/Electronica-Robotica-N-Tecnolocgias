#include <Servo.h>

Servo servo1;
int ang = 0;
const int tiempo = 15;
const int inc = 1;

void setup() 
{
  servo1.attach(9);
}

void loop() 
{
  for (ang = 0; ang <= 180; ang+=inc)
  {
    servo1.write(ang);
    delay(tiempo);
  }
  for (ang = 180; ang >= 0; ang-=inc)
  {
    servo1.write(ang);
    delay(tiempo);
  }

}
