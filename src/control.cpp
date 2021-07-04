#include "control.h"

void Control::fingertest(void)
{
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