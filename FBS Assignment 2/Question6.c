#include <stdio.h>
void main(){
    int number_divisibilty;

    printf("Enter number to check whether this number is divicible by 3 or by 5 or by both : ");
    scanf("%d" , &number_divisibilty);

    if(number_divisibilty % 5 && number_divisibilty % 3)
        printf("This number is divisible by both");
    else if ( number_divisibilty % 3)
        printf("This number is divisible by only 3");      
    else if( number_divisibilty % 5)
        printf("This number is divisible by only 5");
    else
        printf("This number is divisible by none");
}