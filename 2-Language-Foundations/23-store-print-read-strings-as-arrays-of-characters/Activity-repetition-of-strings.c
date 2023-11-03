#include <stdio.h>
int main()
{
    int howmany;
    char word[100];
    scanf("%d%s",&howmany,&word);
    for (int i=0;i<howmany;i++){
        printf("%s\n",word);
    }
    return 0;
}

