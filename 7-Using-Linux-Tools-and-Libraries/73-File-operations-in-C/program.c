#include <stdio.h>

int main(int argc, char *argv[]) {
	// *argv[] can also be written **argc or argv[][]
	int i;
	printf("I have %d arguments from the command line: \n", argc);
	for (i = 0; i < argc; i++){
		printf("Arguments %d: %s\n",i,argv[i]);
	}

	return 0;
}
