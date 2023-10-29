#include <stdio.h>

int main(){
	int TimeOfArrival = 0;
	scanf("%d",&TimeOfArrival);
	int total = 10 + 5*TimeOfArrival;
	int totalexceeds53 = total > 53;
	if (totalexceeds53){
		printf("53\n");
	}else{
		printf("%d\n",total);
	}
}
