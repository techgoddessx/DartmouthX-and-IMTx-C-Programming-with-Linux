#include <stdio.h>
int main(void) {
    int howmany;
    scanf("%d",&howmany);
    int i;
    char name[15];
    char lastname[15];
    for(i=0;i<howmany;i++)
    {
        scanf("%s %s\n",name,lastname);
        printf("%s %s\n",lastname,name);
    }
    
    return 0;
}

