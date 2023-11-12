#include <stdio.h>

int main()
{
	// we will try to get the addresses of these variables and print them using pointers
	int a = 42;
	double d = 58.394;
	char c = 'r';
	
	int * addressofA = &a; // get the address of a and put it in the variable addressofA
	printf("address of a: %p\n", addressofA);
	
	double * addressofD = &d;
	printf("address of d: %p\n", addressofD);

	char * addressofC = &c;
	printf("address of d: %p\n", addressofC);

	return 0;
}
