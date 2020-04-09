#include <stdio.h>
int main(void) {
/* Repeating instructions with variables
Print the x8 multiplication table */
int i, num;
num=8;
for(i=0;i<=10;i++) {
printf("%dx%d = %d\n", i, num, i*num);
}
return 0;
}
