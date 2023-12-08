#include <stdio.h>

// You want to determine the number of cities in a given region that have a population strictly greater than 10,000.
// write a program that first reads the number of cities in a region as an integer
// and then the populations for each city one by one (also integers).

int main(void){
	int n; // number of cities in a region 
	scanf("%d",&n);
	int population; // population of each city
	int i,p;
	for(i=0; i<n; i++)
	{
		scanf("%d",&population);
		if (population > 10000)
		{
			p++;
		}
	}
	printf("%d\n",p);
	return 0;
}	
