#include "alert.h"


void canShowAlert(float rate) {
if (rate >= 20 && rate <==24) {
    printf("Warning: Approaching discharge");
} else if (rate >=76 and rate <= 80) {
    printf("Warning: Approaching charge-peak");
}
}
