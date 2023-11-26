// Allocate memory in the heap using malloc
// malloc = memory allocation 
// dynamic memory is managed by the user 
// variables are stocked in the stack
#include <stdlib.h>
int main(void){
    //! showMemory(start=272)
    int * intptr;
    double * doubleptr;
    intptr = (int *) malloc(sizeof(int));
    * intptr = 5;
    doubleptr = (double *) malloc(sizeof(double));
    * doubleptr = 9.0;
    return 0;
}
