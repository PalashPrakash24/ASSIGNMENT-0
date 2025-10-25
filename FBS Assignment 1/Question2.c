#include <stdio.h>
int main(){
    int num , remainder , reversed = 0 , orignal;
    
    printf("Enter the 3-digit number of your choice : ");
    scanf("%d" , &num);

    orignal = num;
    remainder = num % 10;
    reversed = remainder;
    num = num/10;

    remainder = num % 10 ;
    reversed = reversed * 10 + remainder;
    num = num/10;

    remainder = num % 10;
    reversed = reversed * 10 + remainder;

    if ( orignal == reversed){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }
}