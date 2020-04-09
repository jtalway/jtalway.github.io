#include <stdio.h>
int main(void) {
double distance, milesToKm;
milesToKm = .621371;
scanf("%lf", &distance);
printf("%.6lf", distance * milesToKm);
return 0;
}
