#include<stdio.h>
int main () {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12)
    printf("You are child");

    else if ( age >= 12 || age <= 19)
    printf("You are Teenager");

    else if( age >= 20 || age <= 59)
    printf("You are Adult");

    else if( age > 60 )
    printf("You are Senior Citizen");
    
    else 
    printf("Please enter valid input");
    
}