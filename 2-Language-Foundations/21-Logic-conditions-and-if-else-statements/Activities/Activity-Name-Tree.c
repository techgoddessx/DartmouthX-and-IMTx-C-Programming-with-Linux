#include <stdio.h>

/* write a program that will give you the name of the tree based on its characteristics. */ 

int main(void) {
	int meters;
	int leaflets;

	scanf("%d",&meters);
	scanf("%d",&leaflets);

	if (meters <= 5 && leaflets >= 8) {
		printf("Tinuviel\n");
	}else if (meters >= 10 && leaflets >= 10) {
		printf("Calaelen\n");
	}else if (meters <= 8 && leaflets <= 5) {
		printf("Falarion\n");
	}else if (meters >= 12 && leaflets <= 7) {
		printf("Dorthonion\n");
	}else {
		printf("Uncertain\n");
	}
	return 0;
}
