#include<stdio.h>
int main(){
    int num1,num2,result;
    char oper;
    printf("Enter the first number: ");
    scanf("%d" , &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the operation symbol that u want to perform: ");
    scanf(" %c", &oper);

    if ( oper == '+'){
        printf("The sum of %d and %d is: %d",num1,num2,num1+num2);
    }
    else if ( oper == '-'){
        printf("The sub of %d and %d is: %d",num1,num2,num1-num2);
    }
    else if ( oper == '*'){
        printf("The mul of %d and %d is: %d",num1,num2,num1*num2);
    }
    else if( oper == '/'){
        printf("The div of %d and %d is: %d",num1,num2,num1/num2);
    }
    else if ( oper == '%'){
        printf("The div of %d and %d is: %d",num1,num2,num1%num2);
    }
    else{
        printf("ERROR");
    }
    return 0;
}
