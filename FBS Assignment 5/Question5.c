// Quesyion5 : Print inverted Pyramid

#include <stdio.h>

int main() {
    int i, j, k, size_of_pyramid;

    printf("Enter the size of Pyramid: ");
    scanf("%d", &size_of_pyramid);

    for (i = size_of_pyramid; i >= 1; i--) {
        // Print spaces before stars
        for (j = 1; j <= size_of_pyramid - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
