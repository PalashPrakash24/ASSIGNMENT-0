#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int avg;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    printf("Enter the fourth number: ");
    scanf("%d",&d);
    printf("Enter the fifth number: ");
    scanf("%d",&e);

    avg = ((a+b+c+d+e)/2);

    printf("Your average of five number is here : %d",avg);

}
