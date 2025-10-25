//  Question 1 : Print armstrong numbers in given range 1 to n.


#include<stdio.h>
int main() {
    int arr[5];
    int element = 15 , flag = 0; 
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter the 5 elements : ");

        if( element == arr[i]){
            printf("FOUND");
            break;
        }
    }
    if (flag == 0){
        printf("Not Found");
        int sum = 0;
        for(int i = 0 ; i < 5 ; i++){
            sum = sum+arr[i];
        }
        printf("Sum of array of elements = %d \n",sum);
    }
}