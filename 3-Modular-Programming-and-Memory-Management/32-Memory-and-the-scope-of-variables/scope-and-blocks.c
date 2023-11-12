#include <stdio.h>

int main()
{
	int a = 10;
	int b = 10;
	// the variables in these brackets will disappear
	// as soon as you will get to int f ( outside of the block)
	{
		int c = 12;
		int d = 13;
		int e = a + c;
		c = b + d;
		printf("c: %d\n",c);
		printf("e: %d\n",e);		
	}

	int f = 14;
	int g = 15;
	printf("f: %d\n",f);
	printf("g: %d\n",g);
}
