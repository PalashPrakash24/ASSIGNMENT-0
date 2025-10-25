#include<stdio.h>
int main(){
    int num;
    printf("Enter the number that you want to check: ");
    scanf("%d",&num);

    if( num % 2 == 0 ){
        printf("The given number is even");
    }
    else{
        printf("The given number is odd");
    }
}