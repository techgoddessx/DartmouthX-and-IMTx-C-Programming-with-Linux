#include <stdio.h>
#include <stdlib.h> // atoi 

int main(int argc, char **argv){
	int integer;
	double adouble, multi;
	if (argc == 3) {
		integer = atoi(argv[1]);
		adouble = atof(argv[2]);
		multi = integer * adouble;
		printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n",integer,adouble,multi);
	} else {
		printf("Invalid input.\n");
	}
	return 0;
}
		
