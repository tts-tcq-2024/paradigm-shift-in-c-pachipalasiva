#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int condition1=temperature < 0 || temperature > 45;
  int condition2=soc < 20 || soc > 80;
  int condition3=chargeRate > 0.8;
  if (condition1 || condition2 || condition3)
  {
    return 0;

  }
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
