// Question2 : Print right-angled triangle.

#include <stdio.h>
int main() {

    int size_of_triangle;
    
    printf("Enter the size of triangle : ");
    scanf("%d",&size_of_triangle);

    for(int i = 1 ; i <= size_of_triangle ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}