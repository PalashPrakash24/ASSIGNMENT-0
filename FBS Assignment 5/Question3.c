// Question3 : Print inverted right-angled triangle.

#include <stdio.h>
int main() {

    int size_of_triangle;
    int i,j;
    printf("Enter the size of triangle : ");
    scanf("%d",&size_of_triangle);

    for( i = size_of_triangle ; i >= 1 ; i--){
        for( j = 1 ; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}