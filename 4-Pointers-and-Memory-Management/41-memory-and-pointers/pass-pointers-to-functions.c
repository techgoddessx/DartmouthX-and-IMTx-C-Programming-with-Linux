#include <stdio.h>

void timestwo(int *);

int main(void){
	int n;
	printf("Please enter an integer: ");
	scanf("%d",&n);
	printf("In main you entered %d.\n",n);
	timestwo(&n);
	printf("In main the value of n is %d.\n",n);
	return 0;
}

void timestwo(int * pointer) {
	printf("In the function: the number is %d,\n", *pointer);
	*pointer = *pointer * 2;
	printf("In the function: the new number is %d.\n", *pointer);
}
