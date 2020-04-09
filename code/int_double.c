#include <stdio.h>
int main(void) {
int num, grade, i;
int sum = 0;
double doubSum;
scanf("%d", &num);
for (i=0; i<num; i++){
	scanf("%d", &grade);
	sum = sum + grade;
}
doubSum = (double) sum;
printf("%.2lf", doubSum/num);
return 0;
}
