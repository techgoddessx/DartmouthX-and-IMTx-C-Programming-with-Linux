#include <stdio.h>

int main(void){
	FILE *ofile;
	char filename[] = "myGrades.txt";
	ofile = fopen(filename,"a");
	
	int n;
	scanf("%d",&n);
	fprintf(ofile," %d",n);
	fclose(ofile);
	
	ofile = fopen(filename,"r");
	int i;
	while((fscanf(ofile,"%d",&i) != EOF)){
		printf("%d ",i);
	}
	fclose(ofile);

	return 0;
}

