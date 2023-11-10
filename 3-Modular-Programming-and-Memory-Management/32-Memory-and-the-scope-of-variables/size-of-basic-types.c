#include <stdio.h>

int main()
{
	char c;
	int i;
	double d;
	char listchar[3];
	int listint[3];
	double listdouble[3];

	sizeof(char);// space in memory expressed in bytes. 1 byte is 8 bits
	
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(listchar[3]));
	printf("%zu\n", sizeof(listint[3]));
	printf("%zu\n", sizeof(listdouble[3]));
	printf("%zu\n", sizeof(listdouble));
	printf("%zu\n", sizeof(listint));
	printf("%zu\n", sizeof(listchar));
	return (0);
}
