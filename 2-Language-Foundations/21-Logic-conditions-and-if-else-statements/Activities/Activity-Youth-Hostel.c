#include <stdio.h>

/* Activity: if else to find hostel cost
 * You are trying to build a C program that calculates your price to pay based on your arrival time. 
 * Your program should print the price (an integer) you have to pay, given the input arrival time.
 */

int main() {
	int TimeOfArrival;

	scanf("%d",&TimeOfArrival);

	int cost = 10 + 5 * TimeOfArrival; 

	if (TimeOfArrival <= 8) { // or you can use cost instead of TimeOfArrival if (cost < 53)
	printf("%d\n",cost);	
	}else{
		printf("%d\n",53);
	}
}


