#include<stdio.h>
int main (){
int arr[100];
int i , j , n , isPrime ; 
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Enter the elements for the array : ");
    for(i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Prime numbers in the array : ");
    for(i = 0 ; i < n ; i++){
        if(arr[i] <= 1)
        continue;

    isPrime = 1;
    for( j = 2 ; j * j <= arr[i] ; j++){
        if(arr[i] % j == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
    printf("%d" , arr[i]);
}
return 0;
}