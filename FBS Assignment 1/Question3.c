#include<stdio.h>
int main(){
    int year;
    printf("Enter the year that you want to check whether it is a leap year or not: ");
    scanf("%d",&year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("The entered year is a leap year");
    }
    else{
        printf("The entered year is not a leap year");
    }
}

