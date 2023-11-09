#include <stdio.h>

// You want to determine the number of cities in a given region that have a population strictly greater than 10,000.
// write a program that first reads the number of cities in a region as an integer
// and then the populations for each city one by one (also integers).

int main(void){
	int numofcities; // number of cities in a region 
	scanf("%d",&numofcities);
	int population[100]; // population of each city
	int i;
	int p10000 = 0;
	for(i=0;i<numofcities;i++)
	{
		scanf("%d",&population[i]);
		if (population[i] > 10000)
		{
			p10000 = p10000 + 1;
		}
	}
	printf("%d\n",p10000);
	return 0;
}	
