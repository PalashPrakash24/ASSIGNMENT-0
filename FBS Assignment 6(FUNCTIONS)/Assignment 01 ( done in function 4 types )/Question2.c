#include <stdio.h>

// 1. No arguments, no return value
void checkPalindrome1() {
    int num, reversed = 0, original, remainder;
    printf("Type 1 - Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("Type 1 - %d is a Palindrome\n", original);
    else
        printf("Type 1 - %d is NOT a Palindrome\n", original);
}

// 2. With arguments, no return value
void checkPalindrome2(int num) {
    int reversed = 0, original = num, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("Type 2 - %d is a Palindrome\n", original);
    else
        printf("Type 2 - %d is NOT a Palindrome\n", original);
}

// 3. No arguments, returns a value
int getNumber3() {
    int num;
    printf("Type 3 - Enter a number: ");
    scanf("%d", &num);
    return num;
}

// 4. With arguments, returns a value
int isPalindrome4(int num) {
    int reversed = 0, original = num, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    // Type 1
    checkPalindrome1();

    // Type 2
    int num2;
    printf("Type 2 - Enter a number: ");
    scanf("%d", &num2);
    checkPalindrome2(num2);

    // Type 3
    int num3 = getNumber3();
    int reversed3 = 0, original3 = num3, remainder3;
    while (num3 != 0) {
        remainder3 = num3 % 10;
        reversed3 = reversed3 * 10 + remainder3;
        num3 /= 10;
    }
    if (original3 == reversed3)
        printf("Type 3 - %d is a Palindrome\n", original3);
    else
        printf("Type 3 - %d is NOT a Palindrome\n", original3);

    // Type 4
    int num4;
    printf("Type 4 - Enter a number: ");
    scanf("%d", &num4);
    if (isPalindrome4(num4))
        printf("Type 4 - %d is a Palindrome\n", num4);
    else
        printf("Type 4 - %d is NOT a Palindrome\n", num4);

    return 0;
}
