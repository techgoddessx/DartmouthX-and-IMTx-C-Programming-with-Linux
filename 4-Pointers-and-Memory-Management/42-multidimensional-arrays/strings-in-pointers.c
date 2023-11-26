#include <stdio.h>
// Store strings in arrays using pointers
int main(void){
	// store characters in a pointer
	char array[] = {'a','b','c'};
	char * pointer;
	pointer = &array[0];
	for(int i = 0; i < 3; i++){
		printf("%c\n",pointer[i]);
	}
	// store strings in arrays
	char array1[] = {"store"};
	char array2[] = {"array"};
	printf("%s %s\n",array1,array2);
	for(int i = 0; i <= 4; i++){
                printf("%c %c\n",array1[i],array2[i]);
        }
	// store strings in arrays using pointers
	char * spointer[] = {array1,array2};
	printf("%s %s\n",spointer[0],spointer[1]);
	// ---------------------------------- 
        char a[4];
        char b[6];
	char c[9];
        char * words[3] = {a, b, c};
        printf("Please enter a word with at  most 3 letters: ");
        scanf("%s", a);
        printf("Please enter a word with at  most 5 letters: ");
        scanf("%s", b);
        printf("Please enter a word with at  most 8 letters: ");
        scanf("%s", c);
	printf("You entered: \n");
	printf("%s %s %s.\n", a, b, c);
	printf("%s %s %s.\n", words[0], words[1], words[2]);
}
