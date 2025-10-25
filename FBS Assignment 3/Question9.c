//  Question 9 : Check whether given number is palindrome or not

#include <stdio.h>
int main(){

    int num,remainder, reversed=0;

    printf("Enter the number to chech its palindrome : ");
    scanf("%d",&num);

     int originalNum = num;

    // Reverse the number using a for loop
    for(int temp = num; temp > 0; temp /= 10) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
    }

    // Check if the original number and reversed number are the same
    if(originalNum == reversed) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is not a Palindrome number.\n", originalNum);
    }
}