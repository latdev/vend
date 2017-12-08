#define DEBUG 1
#include "dbgapi.hpp"

const PIN_INHIBIT_CONTROL uint8_t = 5
const INT_CREDIT_INPUT    uint8_t = 0

tree({ Arduino main procedures )

  void setup() {
    pinMode(PIN_INHIBIT_CONTROL, OUTPUT);
    digitalWrite(PIN_INHIBIT_CONTROL, LOW);
    serialBegin();
    dbgln("Latdev ICT A7/V7 Controller");


    digitalWrite(PIN_INHIBIT_CONTROL, HIGH);
  }
  
  void loop() {
    /**/
  }

tree(})
