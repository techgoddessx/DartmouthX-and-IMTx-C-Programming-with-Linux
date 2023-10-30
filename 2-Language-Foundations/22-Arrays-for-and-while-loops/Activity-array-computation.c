#include <stdio.h>

int main(void){
	//The program should read in the number of ingredients (up to a maximum of 10 ingredients)
	// then for each ingredient the price per pound.
	// Finally your program should read the weight necessary for the recipe (for each ingredient in the same order)
	// Your program should calculate the total cost of these purchases, then display it with 6 decimal places.
	int numofing;
	scanf("%d\n",&numofing);
	int i;
	double priceperpound[10];
	double recipeweight[10];
	double totalcost = 0;
	for(i=0;i<numofing;i++){
		scanf("%lf",&priceperpound[i]);
	}
	for(i=0;i<numofing;i++){
		scanf("%lf",&recipeweight[i]);	
	}
	for(i=0;i<numofing;i++){
		totalcost = totalcost + (priceperpound[i] * recipeweight[i]);
	}
	printf("%.6lf\n",totalcost);
	return 0;
}

