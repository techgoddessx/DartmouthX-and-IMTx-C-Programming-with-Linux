#include <stdio.h>

// write a program to find out how many letters occur multiple times in a given word.

int main(void){
        // we should read the word from input
        char word[50];
        scanf("%s",word);
        // we need to know how many letter in the word
        int l = 0;
        while (word[l] != '\0'){
                l++;
        }
        // we should sord the letters of the word alphabetically
        int i;
        int j;
        char swap;
        for(j=0;j<l-1;j++){
                for(i=0;i<l-1;i++){
                        if(word[i]>word[i+1]){
                                swap = word[i];
                                word[i] = word[i+1];
                                word[i+1] = swap;
                        }
                }
        }
        // let's iterate through each letter of the word
        int repeated=0;
        for(i=0;i<l;i++){
                if(word[i] == word[i+1]){
                    if(word[i] != word[i-1]){
                            repeated++;
                    }
                }
        }
        printf("%d",repeated);
        return 0 ;
}
