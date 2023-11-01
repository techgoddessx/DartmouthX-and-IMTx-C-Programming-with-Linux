#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int smallest = array[0];
    int largest = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", smallest);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

