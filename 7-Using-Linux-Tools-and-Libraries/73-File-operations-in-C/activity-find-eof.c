#include <stdio.h>
// my way
int main(void){
	FILE *ifile;
	ifile = fopen("gradeComparison.txt","r");
	
	double array[10];
	int j = 0;
	while((fscanf(ifile,"%lf",&array[j])) != EOF){
		j++;
	}
	double maxgrade = array[0];
	int class = 1;

	for(int i = 0; i < j; i++){
		if(maxgrade < array[i]){
			maxgrade = array[i];
			class++;
		}else if (maxgrade > array[i]){
			class++;
		}
	}
	if(maxgrade == array[0]){
		printf("Yes\n");
	} else {
		printf("No %d\n",class);
	}
	fclose(ifile);
	return 0;
}


