#include <Arduino.h>

// if debug mode is enabled, then enable arduino serial
#if defined(DEBUG) and DEBUG == 1
  #define serialBegin() Serial.begin(9600); while(!Serial)
  #define dbg(...) Serial.print(String("") + __VA_ARGS__)
  #define dbgln(...) Serial.println(String("") + __VA_ARGS__)
#else
  #if not defined(DEBUG)
    #warning DEBUG Constant not defined, debugger disabled!
  #endif
  #define serialBegin()
  #define dbg(...)
  #define dbgln(...)
#endif

// Code folding hack for Arduino Studio
// folding begin :  tree({ Foldind comment )
// folding end   :  tree(})
#define tree(...)

// Standart callback function typezation
typedef void (*callback)(void);

