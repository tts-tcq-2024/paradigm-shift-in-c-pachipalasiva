#include <stdio.h>
#include <assert.h>
#include "alert.h"
 
int checkchargerate(float chargeRate) {   //checking chargerate in range or not
  if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  return 1;
}
 
int batteryIsOk(float temperature, float soc, float chargeRate) {
    return ((checktemprange(temperature))&&(checksoc(soc))&&(checkchargerate(chargeRate)));
}
 
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
  showAlert(78);
}
