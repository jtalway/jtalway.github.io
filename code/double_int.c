#include <stdio.h>
int main(void) {
int current, futureInt;
double growth, futureDoub;
scanf("%d", &current);
scanf("%lf", &growth);
futureDoub = current * (1 + growth / 100);
futureInt = (int) futureDoub;
printf("%d", futureInt);
return 0;
}
