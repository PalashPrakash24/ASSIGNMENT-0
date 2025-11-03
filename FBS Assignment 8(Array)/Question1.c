#include<stdio.h>
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i, min, max;


    min = max = arr[0]; // ✅ initialize correctly

    for (i = 1; i < 10; i++) { // ✅ same i variable
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("\nMinimum element = %d", min);
    printf("\nMaximum element = %d", max);

    return 0;
}
