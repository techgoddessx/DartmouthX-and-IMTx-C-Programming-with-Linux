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
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&ppp[i]);
    }
    // your program should read the weight necessary for the recipe
    // (for each ingredient in the same order).
    printf("Enter for each ingredient the weight necessary for the recipe: \n");
    double weight[10];
    double cost = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&weight[i]);
        cost += (weight[i]*ppp[i]);
    }
    printf("the total cost of these purchases:");
    printf("%lf\n",cost);

    return 0;
}

