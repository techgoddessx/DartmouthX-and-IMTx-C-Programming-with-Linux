#include <stdio.h>
#include <math.h>

int main(void){
        int n;
        scanf("%d",&n);
        double srt = sqrt(n);
        printf("%.8lf\n",srt);
        printf("%.10lf\n",exp(1));
        printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra  program.c -lm -o program\n");
        return 0;
}
