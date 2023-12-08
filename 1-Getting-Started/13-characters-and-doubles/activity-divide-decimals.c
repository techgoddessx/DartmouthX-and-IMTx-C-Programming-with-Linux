#include <stdio.h>

int main(void) {
    double cash, price;
    int num;
    
    scanf("%lf %lf", &cash, &price);
    num = (int)(cash/price);
    printf("%d", num);
    return(0);
}
