#include <stdio.h>

int main(void){
	double n;
	scanf("%lf",&n);
	double CtoF = n * 9.0 / 5.0 + 32.0;
	printf("%.1lf",CtoF);
	return 0;
}
