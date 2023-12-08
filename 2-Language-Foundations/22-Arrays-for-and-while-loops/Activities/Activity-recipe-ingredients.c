#include <stdio.h>
/* Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array.
 It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity. */

int main(void){
        int qt[10],n;
        for(int i = 0; i < 10; i++){
                scanf("%d",&qt[i]);
        }
        scanf("%d",&n);
        printf("%d",qt[n]);
        return 0;
}
