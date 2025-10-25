#include <stdio.h>
void main(){
    int num1 , num2 , num3;

    printf("Enter the first number : ");
    scanf("%d",&num1);

    printf("Enter the second number : ");
    scanf("%d",&num2);

    printf("Enter the second number : ");
    scanf("%d",&num3);

    if( num1 > num2 || num1 > num3){
        printf("The greater number among three of them is : %d",num1);
    }
    else if ( num2 > num1 || num2 > num3){
         printf("The greater number among three of them is : %d",num2);
    }
    else{
         printf("The greater number among three of them is : %d",num3);
    }
}