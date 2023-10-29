#include <stdio.h>

/*  write a small program that will easily allow you and your travel companions to know the price of one night */ 

int main(void) {
	int age;
	int weight;

	scanf("%d",&age);

	if (age == 60) { 
		printf("0\n");
       	} else if (age <= 10){
		printf("5\n");
	} else if (!(age == 60) && !(age<=10)) {
		scanf("%d",&weight);
		if (weight <= 20) {
			printf("30\n");
		} else if (weight >= 20) {
			printf("%d\n",30+10);
		}else {
			printf("nothing");
		}
	}
	return 0;
}
