#include <stdio.h>

int sumOfDigits(int);

int main(void)
{
	int n;
	scanf("%d",&n);
	
	int thesum = sumOfDigits(n);

	printf("%d\n",thesum);
	
	return 0;
}

int sumOfDigits(int n)
{
	int total = 0;
	 while (n > 0)
        {
                int mod = n % 10; // split last digit from number

                total += mod;

                n = n / 10; // divide n by 10.
        }

        return total;
}
