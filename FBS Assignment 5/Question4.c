// Question4 : Print Pyramid.

#include <stdio.h>
int main () {

    int i,j,size_of_pyramid;

    printf("Enter the size of Pyramid : ");
    scanf("%d", &size_of_pyramid);

    for( i = 1 ; i <= size_of_pyramid ; i++){
        for( j = 1 ; j <= size_of_pyramid - i; j++){
            printf(" ");
        }
        for( int k = 1; k <= (2 * i - 1); k++){
        printf("*");
        }
        printf("\n");
    }   
    return 0;
}
