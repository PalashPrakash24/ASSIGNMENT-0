// Question 4 : Print strong number given in the range 1 to n

#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, i, temp, digit, sum;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        // Calculate sum of factorials of digits
        while (temp > 0) {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        // Check if number is strong
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}

