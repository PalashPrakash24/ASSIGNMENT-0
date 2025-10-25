// Question 7 : Find the factorial of a given number

#include<stdio.h>
int main() {
    int num;
    int factorial = 1;

    printf("Enter the number to find factorial of it : ");
    scanf("%d",&num);

    if(num < 0){
        printf("Negative value not accepted in factorial");
    }
    else{
    for( int i = 1 ; i <= num ; ++i){
        factorial *= i;
    }
    printf("Factorial of %d is : %d",num,factorial);
}
}