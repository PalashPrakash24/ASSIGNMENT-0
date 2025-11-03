#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    printf("\nEven numbers in the array: ");
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers in the array: ");
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
