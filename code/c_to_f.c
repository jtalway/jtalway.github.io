#include <stdio.h>
int main(void) {
double celsius = 0.0;
double fahrenheit;
scanf("%lf", &celsius);
fahrenheit = celsius * 9.0/5.0 + 32;
printf("%.1lf", fahrenheit);
return 0;
}
