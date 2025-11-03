#include<stdio.h>
int main() {
     int arr[5] = {1,2,3,4,5},i;
     printf("Reversed Array : ");
     for(i = 4 ; i >= 0 ; i--){  // starting from the last index
        printf("%d ",arr[i]);
     }
}