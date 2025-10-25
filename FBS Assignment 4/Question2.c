// Question 2 : Print prime numbers in the given range ( 1 to n)


#include <stdio.h>

int main() {
    int l_n, u_n, i, j, isPrime;

    printf("Enter the lower limit (l_n): ");
    scanf("%d", &l_n);

    printf("Enter the upper limit (u_n): ");
    scanf("%d", &u_n);

    printf("Prime numbers between %d and %d are:\n", l_n,u_n);

    for (i = 2 ; i <= u_n ; i++) {
        isPrime = 1; 


        for (j = 2 ; j * j <= i ; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
