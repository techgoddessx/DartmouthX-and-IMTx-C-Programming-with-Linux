#include <stdio.h>

int main(void) {
    // The program should read in the number of ingredients
    // (up to a maximum of 10 ingredients),
    int n;
    printf("Enter the number of elements in the array: \n");
    scanf("%d",&n);
    // then for each ingredient the price per pound.
    printf("Enter for each ingredient the price per pound: \n");
    double ppp[10];
    double pp;
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&pp);
        ppp[i] = pp;
    }
    // your program should read the weight necessary for the recipe
    // (for each ingredient in the same order).
    printf("Enter for each ingredient the weight necessary for the recipe: \n");
    double weight[10];
    double weigh;
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&weigh);
        weight[i] = weigh;
    }
    printf("the total cost of these purchases:");
    double cost = 0;
    for(int i = 0; i < n; i++)
    {
      cost = cost + (weight[i]*ppp[i]);
    }
    printf("%lf\n",cost);


}

