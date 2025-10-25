// Question 1 : Print solid square pattern 
// Input = 5

#include<stdio.h>
int main(){
    int size_of_square;

    printf("Enter the size of the Square : ");
    scanf("%d",&size_of_square);

    for( int i = 0 ; i < size_of_square ; i++){
        for(int j = 0 ; j < size_of_square ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}