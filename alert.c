#include "alert.h"

void approchingDischart(float rate) {
    if(rate >= 20 && rate <=24)
          printf("Warning: Approaching discharge");
}


void approchingPeak(float rate) {
    if(rate >=76 && rate <= 80) {
        printf("Warning: Approaching charge_peak");
}
void showAlert(float rate) {
approchingDischart(rate);
approchingPeak(rate);
}
}
