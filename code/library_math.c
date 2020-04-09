

#include <stdio.h>
#include <math.h>

int main(void) {
	double E, num;
	
	scanf("%lf", &num);
	
	printf("%.8lf\n", sqrt(num));
	E = exp(1);
	printf("%.10lf\n", E);
	printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lm program.c -o program\n");
	// alternative:
	// printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra /usr/lib/libm.a program.c -o program\n");
	return 0;
}


