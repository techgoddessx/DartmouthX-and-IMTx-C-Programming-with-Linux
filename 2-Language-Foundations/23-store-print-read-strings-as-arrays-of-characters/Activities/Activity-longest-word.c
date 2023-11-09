#include <stdio.h>

// Activity: find the longest word in a text
// find the length of the longest word in a text
// with no punctuation or special characters of any kind - only contains words.

int main(void){
        char word[12];
        int nbwords;
        
        scanf("%d",&nbwords);

        int i;
        
        int lenMax = 0;
        int l;
        for(i = 0; i < nbwords; i++)
        {
                
                scanf("%s",word);

                l = 0;
                while(word[l] != '\0')
                {
                        l++;
                }
                if (l > lenMax)
                {
                        lenMax = l;
                }
        }
        printf("%d",lenMax);
        return 0;

}
