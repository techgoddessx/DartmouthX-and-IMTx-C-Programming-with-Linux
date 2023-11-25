#include <stdio.h>
// pass arrays to functions 
// make a function that prints arrays 
void printArr(int * ptr, int size);
// function to turn every vale in an array into square
void squareArr(int * ptr, int size);
int main(void){
	int array1[] = {1,2,3};
	int a = 3;
	printArr(&array1[0],a);
	squareArr(&array1[0],a);
	printArr(&array1[0],a);
	return 0;
}

void printArr(int * ptr, int size){
	for(int i = 0; i < size; i++){
		printf("%d\n", ptr[i]);
		//printf("%d\n",*(ptr+i)); 
	}
}

void squareArr(int * ptr, int size){
	for(int i = 0; i < size; i++){
		ptr[i] = ptr[i]*ptr[i];
		//* (ptr+i) *= * (ptr+i);
	}
}
