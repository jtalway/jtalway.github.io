#include <stdio.h>
void timesTwo(int *);
int main(void)
{
	int n;
	printf("Please enter an integer: ");
	scanf("%d", &n);
	printf("In main: you entered %d.\n", n);
	//passes the address of n to the function
	timesTwo(&n);
	printf("In main: The value of n is %d.", n);

	return 0;
}

void timesTwo(int *numptr)
{
	printf("in the function the number is %d.\n", *numptr);
	*numptr = *numptr * 2;
	printf("in the function the new number is %d.\n", *numptr);
}