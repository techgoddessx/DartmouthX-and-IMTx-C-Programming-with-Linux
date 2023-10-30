#include <stdio.h>

/* Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). */

int main(void){
	int numofcars;
	scanf("%d",&numofcars);

	double carweight[50]; // Assuming no more than 50 boxcars
	double totalweight = 0.0;

	int i;
	// Calculate the target weight for each boxcar
	for(i =0; i < numofcars; i++){
		scanf("%lf",&carweight[i]);
		totalweight = totalweight + carweight[i];
	}

	double targetweight = totalweight / numofcars;
	// Calculate and display the weight adjustments
	for(i =0; i < numofcars; i++){
		double output = targetweight - carweight[i];
		printf("%.1lf\n",output);
	}
return 0; 
}
