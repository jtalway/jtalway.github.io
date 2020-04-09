#include <stdio.h>
int main(void) {
/* Reading user input
Read an integer and print the corresponding multiplication table */
int i, num;
scanf("%d", &num);
for(i=0;i<=10;i++) {
printf("%dx%d = %d\n", i, num, i*num);
}
return 0;
}
