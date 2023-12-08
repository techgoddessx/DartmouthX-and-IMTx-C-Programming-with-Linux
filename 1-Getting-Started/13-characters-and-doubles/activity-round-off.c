#include <stdio.h>
#include <math.h>

int main(void){
        double cement;
        scanf("%lf",&cement);
        int bags = ceil(cement/120);
        int totalcost = 45 * bags;
        printf("%d",totalcost);
        return 0;
}
