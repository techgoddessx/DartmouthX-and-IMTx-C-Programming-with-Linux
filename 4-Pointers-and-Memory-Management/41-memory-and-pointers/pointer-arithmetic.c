#include <stdio.h>

int main(void){
    // arrays
    int    array1[] = {1,2,3};
    char   array2[] = {'a','b','c'};
    double array3[] = {1.0,2.0,3.0};
    // print value of arrays and their addresses
    for (int i = 0; i < 3; i++){
        printf("%d %c %.1lf\n",array1[i],array2[i],array3[i]);
        printf("%p %p %p\n",&array1[i],&array2[i],&array3[i]);
    }
    // assign arrays to pointers 
    int    * pointer1;
    char   * pointer2;
    double * pointer3;
    pointer1 = array1; 
    pointer2 = array2;
    pointer3 = array3;
    // pointer arithmetic 
    *pointer1 = 4;
    *pointer2 = 'd';
    *pointer3 = 4.0;
    // print the new values 
    printf("the new values are      : %d %c %.1lf\n",*pointer1,*pointer2,*pointer3);
    // modify the array from the pointer 
    * (pointer1 + 1) = 5;
    * (pointer2 + 1) = 'e';
    * (pointer3 + 1) = 5.0;
    * (pointer1 + 2) = 6;
    * (pointer2 + 2) = 'f';
    * (pointer3 + 2) = 6.0;
    // print the new values 
    for (int i = 1; i < 3; i++){
	  printf("the new values are      : %d %c %.1lf\n",array1[i],array2[i],array3[i]);  
    }
    return 0;
}
