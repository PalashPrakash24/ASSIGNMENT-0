#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0,i;
    sum = arr[0];
    for (i = 0 ; i < 10 ; i++){
        sum = sum + arr[i];
}
    printf("The sum of all numbers in the array is : %d",sum);
    return 0;
}