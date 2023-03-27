

/* ==================================================
** Library
**
** =============================================== */


#include <Arduino.h>

#include "log_service.h"


/* ==================================================
** Main
**
** =============================================== */


void setup() 
{
  Log_init();
}


void loop() 
{
  // Re-initialize functions

  // Read sensor functions

  // Print function
  static uint32_t intv = millis();
  if(millis() - intv < 2000) {return;}

  LOG_PRINTF("\n");

  //

  LOG_PRINTF("\n");
  intv = millis();
}