#include <stdio.h>

int main(void){
        int i,n;
        int grade;
        int sum = 0;
        scanf("%d",&n);
        for(i = 0; i < n; i++){
                scanf("%d",&grade);
                sum += grade;
        }
        double average;
        average = (double)sum / n;
        printf("%.2lf",average);
        return 0;
}
