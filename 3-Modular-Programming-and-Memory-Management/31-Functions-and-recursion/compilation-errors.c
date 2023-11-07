#include <stdio.h>
int sum(int,int);
int main(void){
	int result;
	result = sum(3,4);
	printf("The sum is %d.\n",result);
	return 0;
}

// Function Definition
// non void function : has a return type thats not void 
// if a function only prints to the screen then its a void function 
// this sum function is a non void function
int sum(int x, int y){
	int compute;
	compute = x+y;
	return(compute);
}
