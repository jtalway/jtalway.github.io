#include <stdio.h>
int main(void) {
int matches = 1;
int boxSize = 1;
scanf("%d %d", &matches, &boxSize);
printf("%d\n", matches/boxSize);
printf("%d", matches%boxSize);
return 0;
}
