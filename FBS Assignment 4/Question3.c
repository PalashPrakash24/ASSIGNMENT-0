// Print perfect numbers in range 1 to n

#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    for(i = 1; i <= n; i++) {
        sum = 0;
        for(j = 1; j < i; j++) {
            if(i % j == 0)
                sum += j;
        }
        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}
