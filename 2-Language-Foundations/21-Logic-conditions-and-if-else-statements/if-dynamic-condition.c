#include <stdio.h>
int main(void) {
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
    int a = 5;
    int b = 2;
    int result;
    printf("Check: Is a == b?\n");
    result = a==b;
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }
    return 0;
}

