#include<stdio.h>
int main(){
    int a;
    int b;
    int temp;

    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\n------BEFORE SWAPPING------\n\n");
    printf("The first number is : %d\n\n",a);
    printf("The second number is : %d\n\n",b);

    temp = a;
    a = b;
    b = temp;
    printf("\n------AFTER SWAPPING------\n\n");
    printf("The first number is : %d\n\n",a);
    printf("The second number is : %d\n\n",b);
}
