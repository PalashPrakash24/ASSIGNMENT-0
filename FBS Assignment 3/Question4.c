#include <stdio.h>

int main() {
    int n;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is Not a Prime number.\n", n);

    return 0;
}
