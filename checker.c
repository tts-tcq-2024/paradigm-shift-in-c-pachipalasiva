#include <stdbool.h>
#include <assert.h>

bool is_temperature_out_of_range(float temperature) {
    return temperature < 0 || temperature > 45;
}

bool is_soc_out_of_range(float soc) {
    return soc < 20 || soc > 80;
}

bool is_charge_rate_out_of_range(float charge_rate) {
    return charge_rate > 0.8;
}

bool battery_is_ok(float temperature, float soc, float charge_rate) {
    return !(is_temperature_out_of_range(temperature) || is_soc_out_of_range(soc) || is_charge_rate_out_of_range(charge_rate));
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
