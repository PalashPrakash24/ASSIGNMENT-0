// Question 10 : Print hollow square with single diagonal

#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the size of the square: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i == j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
