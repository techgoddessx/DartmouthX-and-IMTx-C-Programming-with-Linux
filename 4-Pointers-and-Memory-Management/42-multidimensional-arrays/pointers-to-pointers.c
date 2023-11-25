#include <stdio.h>
int main(void){
	int array1[] = {1,2,3};
	int array2[] = {4,5,6};
	int array3[] = {7,8,9};

	int * array4[] = {array1,array2,array3};
	
	// add each value by 10
	
	* (*(array4 + 0) + 0) += 10;
	* (*(array4 + 0) + 1) += 10;
	* (*(array4 + 0) + 2) += 10; // same as * (array4[0] + 2)+= 10; and array[0][2] += 10;
	* (*(array4 + 1) + 0) += 10;
        * (*(array4 + 1) + 1) += 10;
        * (*(array4 + 1) + 2) += 10;
	* (*(array4 + 2) + 0) += 10;
        * (*(array4 + 2) + 1) += 10;
        * (*(array4 + 2) + 2) += 10;
	// print everything
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\n",array4[i][j]);
		}
	}
		
	return 0;
}
