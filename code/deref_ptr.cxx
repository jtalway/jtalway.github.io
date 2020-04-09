#include <stdio.h>
int main(void)
{
	int i = 42;
	int *iAdr;
	iAdr = &i;
	//same output - dereference pointer *iAdr is same as i
	printf("Address of i is %p and i = %d.\n", iAdr, i);
	printf("Address of i is %p and i = %d.\n", iAdr, *iAdr);
	//change i by using pointer
	*iAdr = 50;
	printf("Address of i is %p and i = %d.\n", iAdr, i);
	return 0;
}