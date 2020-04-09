#include <stdio.h>
int main(void) {
/* Reading user input inside a loop
Read and process multiple integers via a loop */
int i, numRobots, height, weight, engine, coefficient, sum;
scanf("%d\n", &numRobots);
sum=0;
for(i=0;i<numRobots;i++) {
scanf("%d %d %d %d\n", &height, &weight, &engine, &coefficient);
sum += (engine + coefficient) * (weight-height);
}
printf("%d", sum);
return 0;
}
