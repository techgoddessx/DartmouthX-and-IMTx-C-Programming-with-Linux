#include <stdio.h>
int main(void) {
    int num_of_passengers;
    double cost_of_gas;
    double result;

    scanf("%d %lf",&num_of_passengers,&cost_of_gas);
    if (num_of_passengers)
    {
        result = (cost_of_gas+1.0) / (num_of_passengers+1);
        printf("%.2lf",result);

    }
    else
    {
         printf("%.2lf",cost_of_gas);
    }

    return 0;
}
