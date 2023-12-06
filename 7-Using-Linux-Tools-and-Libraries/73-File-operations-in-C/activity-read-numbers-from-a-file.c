#include <stdio.h>

int main(void){
	FILE *ifile;

	double N,num;
	double sum = 0;

	ifile = fopen("studentGrades.txt","r");

	fscanf(ifile,"%lf",&N);
	for(int i = 0; i < N; i++){
		fscanf(ifile,"%lf",&num);	
		sum += num;
	}
	
	double av;
	av = sum / N;

	printf("%.2lf",av);

	fclose(ifile);

	return 0;
}
