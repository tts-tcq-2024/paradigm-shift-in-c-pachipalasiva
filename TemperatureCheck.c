#include "TemperatureCheck.h"
int checktemprange(float temperature) {   //checking temperature in range or not
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return 0;
  }
  return 1;
}
