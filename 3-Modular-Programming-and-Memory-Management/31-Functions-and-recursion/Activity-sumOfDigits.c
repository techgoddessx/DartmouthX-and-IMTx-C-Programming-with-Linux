#include <stdio.h>

int sumOfDigits(int);

int main(void)
{
	int n;
	scanf("%d",&n);

	while (n > 0)
	{
		int mod = n % 10; // split last digit from number
		printf("%d\n",mod); // print the digit

		n = n / 10; // divide n by 10.
	}

	return 0;
}
