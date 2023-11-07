#include <stdio.h>

// find the smallest integer using min()

int min(int n, int values[]);

int main(void){
        int n;
        scanf("%d",&n);
        int array[n];
        for (int i = 0; i < n; i++){
                scanf("%d",&array[i]);
        }
        int result = min(n,array);
        printf("%d",result);
}

int min(int n, int values[]){
        int smallest = values[0];
        for (int i = 0; i < n; i++){
                if (values[i] < smallest){
                         smallest = values[i];
                }
        }
        return smallest;
}

