#include <stdio.h>
// Activity: print a square of stars using nested loops
int main(void){
    // get the number of n x n stars
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for(i =0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
