#include <stdio.h>
void swapnumbers(){
    int a, b;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The first number is: %d\n", a);
    printf("The second number is: %d\n", b);
}
void swapnumbers2(int a, int b){
    int temp;
    printf("TYPE 2\nWith Parameters, No Return Value\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("The first number is: %d\n", a);
    printf("The second number is: %d\n", b);
}
int swapnumbers3(){
    int a, b;
    int temp;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    return a, b;
}
int swapnumbers4(int a, int b){
    int temp;
    printf("TYPE 4\nWith Parameters, Return Value\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    return a, b;
}
int main(){
    swapnumbers();
    swapnumbers2(10, 20);
    int a, b = swapnumbers3();
    printf("The first number is: %d\n", a);
    printf("The second number is: %d\n", b);
    int a, b = swapnumbers4(10, 20);
    printf("The first number is: %d\n", a);
    printf("The second number is: %d\n", b);
}