#include <stdio.h>
int main(void) {
    char name[50];
    scanf("%s",name);
    int i = 0;
    while (name[i] != '\0')
        i++;
    if ((i%2) == 0) // means the number is even
    {
        printf("1");
    }else{
        printf("2");
    }
    return 0;
}

