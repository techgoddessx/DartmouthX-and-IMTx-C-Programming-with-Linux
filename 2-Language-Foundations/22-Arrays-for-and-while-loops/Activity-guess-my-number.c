#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int answer;
    int a[100];
    int index = 0;

    while (answer != n) {
        scanf("%d", &answer);
        a[index] = answer;
        index += 1;
    }

    for (int i = 0; i < index; i++) {
        if (a[i] < n) {
            printf("it is more\n");
        } else if (a[i] > n) {
            printf("it is less\n");
        }else{
        printf("Number of tries needed:\n%d", index);
        }
    }
    return 0;
}
