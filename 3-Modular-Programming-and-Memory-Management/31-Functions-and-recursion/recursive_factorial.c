#include <stdio.h>
// 5! = 1*2*3*4*5
// n! = 1*2*...*(n-1)*n
// RECURSION: ONE FUNCTION CALLS ITSELF

int factorial(int); // prototype
	
int main(void)
{
	int n;
	int facto;

	printf("Please enter a positive integer: ");
	scanf("%d",&n);
	
	facto = factorial(n);

	if (n < 0)
	{
		printf("%d is negative! Aborting...\n",n);
	}else{
		printf("%d! = %d.\n", n, facto);
	}
	return 0;
}

int factorial(int a)
{
	int ogfacto = 1;
	
	for (int i = 1; i <= a; i++){
		ogfacto = i * ogfacto;
	}

	return ogfacto;
}
