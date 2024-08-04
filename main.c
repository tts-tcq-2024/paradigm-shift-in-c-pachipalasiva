#include <stdio.h>
#include <assert.h>
 #include <alert.h>

int checktemprange(float temperature) {   //checking temperature in range or not
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return 0;
  }
  return 1;
}
 
int checksoc(float soc) {   // checking soc in range or not
  if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
    return 0;
  }
  return 1;
}
 
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
 showAlert(78)
}
