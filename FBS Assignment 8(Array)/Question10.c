#include <stdio.h>
int main() {
    int arr[5] = {5, 2, 8, 1, 3};
    int i, j, temp;
    char choice;
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Enter your choice u want to arrange it in asccending 'a' or descending 'd' : ");
    scanf("%c",&choice);
    if(choice == 'a'){
    printf("Array in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
    else{
    printf("Array in desscending order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
    return 0;
}
