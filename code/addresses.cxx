#include <stdio.h>
void myFunction(int *, double *, char *);
int main(void)
{
	int i = 42;
	int *iAdr = &i;
	double a = 3.14;
	double *aAdr = &a;
	char c = 'p';
	char *cAdr;
	cAdr = &c;
	printf("c = %c and its address is %p\n", c, cAdr);

	printf("a=%lf and its address is %p\n", a, aAdr);

	printf("i=%d and its address is %p\n", i, iAdr);
	myFunction(iAdr, aAdr, cAdr);
	return 0;
}

void myFunction(int *iptr, double *aptr, char *cptr)
{
	printf("function recieved addresses %p, %p and %p.\n", iptr, aptr, cptr);
}
