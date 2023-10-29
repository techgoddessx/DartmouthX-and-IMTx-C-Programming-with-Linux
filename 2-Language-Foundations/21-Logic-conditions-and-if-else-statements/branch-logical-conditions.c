#include <stdio.h>
int main(void){
	int age;

	printf("whats is your age?\n");
	scanf("%d",&age);

	int isAdult = age >= 18;

	int isSenior = age >= 65;

	int isInTheWorkForce = isAdult && !isSenior;

	if (isInTheWorkForce){
		printf("You are in the labor force\n");
	}else{
		printf("You are not in the labor force\n");
	}
	return 0;
}
