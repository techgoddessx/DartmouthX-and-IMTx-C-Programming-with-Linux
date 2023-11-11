#include <stdio.h>
int main() {
    int num = 2147483645; // the largest int is 2147483647 
			  // after that num you'll get negative num
    int i;
    
    for (i=0; i<8; i++) {
        printf("%d\n", num);
        num = num+1;
    }
    
    return(0);
}
