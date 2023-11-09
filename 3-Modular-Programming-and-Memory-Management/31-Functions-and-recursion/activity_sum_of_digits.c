#include <stdio.h>

int sumOfDigits(int);

int main(void)
{
	int n;
	scanf("%d",&n);
	
	int total = 0;

	while (n > 0)
	{
		int mod = n % 10; // split last digit from number
		printf("%d\n",mod); // print the digit
		
		total += mod;

		n = n / 10; // divide n by 10.
	}

	printf("the total is : %d.\n",total);

	return 0;
}
