#include <stdio.h>

int main(void){
	FILE *ifile; 
	/* ifile is a variable name - you could use any other name here. 
           However, the '*' is important - we are working with a pointer. 
           We call this a file pointer. */
	int i, num, N;
	ifile = fopen("my_first_file.txt","r");
       	/* open file for reading
	 * the "r" stands for reading */
	fscanf(ifile,"%d", &N); 
	/* read first number from the file. 
	 * just like scanf(), the only difference is the file pointer
	 that get passed in as well */ 
	printf("There are %d numbers in the file.\n", N);
	for(i = 0; i < N; i++){
		fscanf(ifile,"%d", &num);
		printf("I read %d from the file. \n", num);
	}

	fclose(ifile); /* closes the file */ 

	return 0;
}
