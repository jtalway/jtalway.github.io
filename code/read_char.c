#include <stdio.h>
int main (void) {
char l;
scanf("%c", &l);
printf("++++%c++++\n", l);
printf("+++%c%c%c+++\n", l, l, l);
printf("++%c%c%c%c%c++\n", l, l, l, l, l);
printf("+%c%c%c%c%c%c%c+\n", l, l, l, l, l, l, l);
printf("%c%c%c%c%c%c%c%c%c\n", l, l, l, l, l, l, l, l, l);
return 0;
}


