#include <stdio.h>
// Pass an array to a function
void reset(int *);
int main()
{
	int arr[3] = {15,16,17};
	reset(arr);
	return 0;
}
void reset(int * ptr){
	* (ptr + 0) = 0;
	* (ptr + 1) = 0;
	* (ptr + 2) = 0;
}
/* 
 * another way to write the reset function : 
 * void reset(int ptr[]){
 * 	ptr[0] = 0;
 * 	ptr[1] = 0;
 * 	ptr[2] = 0;
 * 	}
 */
