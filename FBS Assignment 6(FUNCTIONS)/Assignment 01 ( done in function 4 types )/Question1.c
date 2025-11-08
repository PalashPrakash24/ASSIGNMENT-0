#include <stdio.h>

// 1. No arguments, no return value
void checkEvenOdd1() {
    int num;
    printf("Type 1 - Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Type 1 - %d is Even\n", num);
    else
        printf("Type 1 - %d is Odd\n", num);
}

// 2. With arguments, no return value
void checkEvenOdd2(int num) {
    if (num % 2 == 0)
        printf("Type 2 - %d is Even\n", num);
    else
        printf("Type 2 - %d is Odd\n", num);
}

// 3. No arguments, returns a value
int getNumber3() {
    int num;
    printf("Type 3 - Enter a number: ");
    scanf("%d", &num);
    return num;
}

// 4. With arguments, returns a value
int isEven4(int num) {
    return num % 2 == 0;
}

int main() {
    // Type 1
    checkEvenOdd1();

    // Type 2
    int num2;
    printf("Type 2 - Enter a number: ");
    scanf("%d", &num2);
    checkEvenOdd2(num2);

    // Type 3
    int num3 = getNumber3();
    if (num3 % 2 == 0)
        printf("Type 3 - %d is Even\n", num3);
    else
        printf("Type 3 - %d is Odd\n", num3);

    // Type 4
    int num4;
    printf("Type 4 - Enter a number: ");
    scanf("%d", &num4);
    if (isEven4(num4))
        printf("Type 4 - %d is Even\n", num4);
    else
        printf("Type 4 - %d is Odd\n", num4);

    return 0;
}
