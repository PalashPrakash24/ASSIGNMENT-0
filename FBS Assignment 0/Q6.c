#include<stdio.h>
int main(){
    int num;
    int sqr;
    int cube;
    printf("Enter the number of that you want square and cube: ");
    scanf("%d",&num);
    sqr = num * num ;
    cube = num * num * num;
    printf("\nThe square of the number is : %d\n",sqr);
    printf("\n\n-------------------------------\n\n");
    printf("The cube of the number is : %d\n",cube);
    return 0;
}
