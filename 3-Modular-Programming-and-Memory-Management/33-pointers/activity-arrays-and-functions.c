#include <stdio.h>

void reverseArray(int value[]);
int main(void){
    //! showMemory(start=65520)
    int array[6];
    for(int i = 0; i < 6; i++){
        scanf("%d",&array[i]);
        //printf("%d\n",array[i]);
    }
    reverseArray(array);
    for (int i = 0; i < 6; i++){
        printf("%d ",array[i]);
    }
}
void reverseArray(int value[]){
    int * a = value;
    int tmp0 = * (a + 0); // array[0] = 0
    int tmp1 = * (a + 1); // array[1] = 1
    int tmp2 = * (a + 2); // array[2] = 2
    * (a + 0) = * (a + 5);// array[0] = array[5]
    * (a + 1) = * (a + 4);// array[1] = array[4]
    * (a + 2) = * (a + 3);// array[2] = array[3]
    * (a + 3) = tmp2;
    * (a + 4) = tmp1;
    * (a + 5) = tmp0;
}
