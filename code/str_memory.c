#include <stdio.h>
// Be sure to include any other library you may need..
#include <stdlib.h>

// Write your allocateString() prototype here
char * allocateString (int numChars);

int main (void) {
	int lengthLight, lengthDark;
	char *strLight, *strDark;

	scanf("%d %d", &lengthLight, &lengthDark);
// Write a line of code here that calls the function allocateString().
	strLight = allocateString(lengthLight+1);
/* The goal is to reserve space for the light setting label, therefor you need to pass the number (lengthLight+1) to the function allocateString() (the +1 is there to reserve space for the null terminatros).
Store the return value of this function call in the varialbe strLight. */

// Write a line of code here that calls the function allocateString().
	strDark = allocateString(lengthDark+1);
/* This time the goal is to reserve space in memory for the dark setting label.
Store the return value of the function call in the varialbe strDark. */

	scanf("%s", strLight);
	scanf("%s", strDark);
	printf("Local settings: %s - %s\n", strLight, strDark);

// Write a line of code here to free the memory allocated for strLight
	free(strLight);
// Write a line of code here to free the memory allocated for strDark
	free(strDark);

	return 0;
}

char * allocateString(int numChars) {
// declare your variables here
	char *ptr;
// Write a line of code here that performs the memory allocation.
/* You should allocate space in memory for the number of characters specified via the input parameter to the function and store the address of the allocated memory in a pointer named ptr.
In order to receive credit for your solutions you need to use sizeof(char) in this line, even if sizeof(char) returns 1. */
	ptr = (char *) malloc(numChars * sizeof(char));
	return ptr;
}
