#include <stdio.h>
int main(void){
	int row1[] = {1,2,3};
	int row2[] = {4,5,6};
	int row3[] = {7,8,9};

	int * rows[] = {row1,row2,row3};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\n",rows[i][j]);
		}
	}
	
	// add each value by 10 
	*(rows[0] + 0) += 10;
	*(rows[0] + 1) += 10;
	*(rows[0] + 2) += 10;
	*(rows[1] + 0) += 10;
        *(rows[1] + 1) += 10;
        *(rows[1] + 2) += 10;
	*(rows[2] + 0) += 10;
        *(rows[2] + 1) += 10;
        *(rows[2] + 2) += 10;



	for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                        printf("%d\n",rows[i][j]);
                }
        }
	return 0;
}
