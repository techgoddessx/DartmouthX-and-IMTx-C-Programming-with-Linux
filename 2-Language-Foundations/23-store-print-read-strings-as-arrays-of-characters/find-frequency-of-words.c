#include <stdio.h>

// Find how many words have the same ammount of letters (frequency of words with # letters)

int main(void) {

    int i = 0; // for looping

    int length[10];
    for(i=0; i<10; i++)
    {
	    length[i]=0; // Initialize the length array with zeros
			 //  we can also initialize it without using a for loop 
			 //  int length[10] = {0}
    }                   

    int nbWords = 0;
    printf("Enter the number of words: ");
    scanf("%d", &nbWords);

    for(i=0; i<nbWords; i++)
    {
	    char word[11];
	    scanf("%s", word);
	    
	    int l = 0;
	    
	    while(word[l] != '\0')
	    {
		    l++;
	    }

	    printf("the word '%s' has %d letters\n", word,l);
	    length[l] = length[l] + 1;
    }
    
    for(i=0; i<10; i++)
    {
	    printf("There are %d words with %d letters.\n", length[i], i);
    }

    return 0;   
}
