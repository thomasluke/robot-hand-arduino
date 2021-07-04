#include "control.h"

// void setup()
// {
//   // put your setup code here, to run once:
// }

// void loop()
// {
//   // put your main code here, to run repeatedly:
// }

int main(void)
{

  init();
  // setup();
  ///// HIDDEN IN ARDUINO /////
  /* 
  int main(void)
  {
    init();

    setup();
      
    for (;;) {
      loop();
    }
          
    return 0;
  }
  */

  Control control;

  Serial.println("in setup()");
  control.fingertest();
}
