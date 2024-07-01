#include <stdbool.h>
#include <assert.h>

bool istemperatureoutofrange(float temperature) {
    return temperature < 0 || temperature > 45;
}

bool issocoutofrange(float soc) {
    return soc < 20 || soc > 80;
}

bool ischargerateoutofrange(float charge_rate) {
    return charge_rate > 0.8;
}

bool batteryIsOk(float temperature, float soc, float charge_rate) {
    return !(istemperatureoutofrange(temperature) || issocoutofrange(soc) || ischargerateoutofrange(charge_rate));
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
