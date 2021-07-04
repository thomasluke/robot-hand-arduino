#include <Arduino.h>
#include <Servo.h>

void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
}

int main(void)
{
  Servo servoindex;
  servoindex.attach(3); // Set index servo to digital pin 3

  Serial.println("in setup()");

  while (true)
  {
    for (int i = 0; i <= 180; i += 5)
    {
      servoindex.write(i);

      delay(50);
    }
    for (int i = 180; i >= 0; i -= 5)
    {
      servoindex.write(i);

      delay(50);
    }

    Serial.println("in loop()");
  }
}
