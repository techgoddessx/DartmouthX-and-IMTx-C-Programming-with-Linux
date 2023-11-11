#include <stdio.h>

int main(void)
{
	double num = 0.3; // should be based on the binary system like 0.25
			  // powers of 2 are the only possible representation
			  // and 0.25 is 1/4 and 1/4 is the same as 1 over 2 to the power 2
	printf("the number is %.40f\n",num);

	return (0);
}
