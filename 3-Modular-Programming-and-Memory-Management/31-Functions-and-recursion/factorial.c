#include <stdio.h>
// 5! = 1*2*3*4*5
// n! = 1*2*3*...*(n-1)*n
int main(void)
{
	int n;
	int facto;

	printf("Please enter a positive integer: ");
	scanf("%d",&n);

	facto = 1;

	for(int i = 1; i <= n; i++)
	{
		facto = i * facto;
	}

	if (n < 0)
	{
		printf("%d is negative! Aborting..\n",n);
	}else{
		printf("%d! = %d.\n", n, facto);
	}
	return 0;
}
