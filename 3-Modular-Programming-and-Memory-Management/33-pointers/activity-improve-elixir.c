#include <stdio.h>

//Write your function prototype here
void elixir(int *);
int main(void){
        int age;
        int *ageAddr = &age;
        scanf("%d", ageAddr);
        printf("Your current age is %d.\n", age);

        elixir(ageAddr);//Write your function call here

        printf("Your new age will be %d!\n", age);
        return 0;
}


//Write your function here
void elixir(int * name)
{
        if (*name <= 21){
                * name = * name * 2;
        }else{
                * name = * name - 10;
        }
}
