#include <stdio.h>

int main() {
    int number, choice;

    printf("\n\n1. Check if number is even or odd");
    printf("\n2. Check if number is prime");
    printf("\n3. Check if number is palindrome");
    printf("\n4. Check if number is positive, negative or zero");
    printf("\n5. Reverse a number");
    printf("\n6. Find sum of digits");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number % 2 == 0)
            printf("The number is EVEN\n");
        else
            printf("The number is ODD\n");
    }

    else if (choice == 2) {
        int isPrime = 1;
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i < number; i++) {
                if (number % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
            printf("%d is a PRIME number\n", number);
        else
            printf("%d is NOT a prime number\n", number);
    }

    else if (choice == 3) {
        int original, reversed = 0, remainder;
        printf("Enter a number: ");
        scanf("%d", &number);
        original = number;
        while (number != 0) {
            remainder = number % 10;
            reversed = reversed * 10 + remainder;
            number = number / 10;
        }
        if (original == reversed)
            printf("%d is a PALINDROME number\n", original);
        else
            printf("%d is NOT a palindrome number\n", original);
    }

    else if (choice == 4) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > 0)
            printf("The number is POSITIVE\n");
        else if (number < 0)
            printf("The number is NEGATIVE\n");
        else
            printf("The number is ZERO\n");
    }

    else if (choice == 5) {
        int reversed = 0, remainder;
        printf("Enter a number: ");
        scanf("%d", &number);
        while (number != 0) {
            remainder = number % 10;
            reversed = reversed * 10 + remainder;
            number = number / 10;
        }
        printf("Reversed number is: %d\n", reversed);
    }

    else if (choice == 6) {
        int sum = 0, digit;
        printf("Enter a number: ");
        scanf("%d", &number);
        while (number != 0) {
            digit = number % 10;
            sum += digit;
            number = number / 10;
        }
        printf("Sum of digits: %d\n", sum);
    }

    else {
        printf("\nINVALID INPUT. Please enter a valid option from the menu.\n");
    }

    return 0;
}
