#include <stdio.h>

int main(void){
	int n;
	double percent;
	scanf("%d",&n);
	scanf("%lf",&percent);
	int result = (n*(percent/100))+n;
	printf("%d",result);
	return 0;
}
