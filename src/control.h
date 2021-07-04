#include <Servo.h>
#include <Arduino.h>

class Control
{
public:
    // Constructor
    Control()
    {
        servoindex.attach(3);
    };

    // Public methods
    // void mainLoop(void);
     void fingertest(void);

private:
    // Variables
    Servo servoindex;

    // Private methods
    // void function(void);
    
};