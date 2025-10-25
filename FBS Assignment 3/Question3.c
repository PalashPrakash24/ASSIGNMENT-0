#include<stdio.h>
int main () {
    int i, start, end, sum =0;

    printf("ENTER THE START VALUE: ");
    scanf("%d", &start);

    printf("ENTER THE END VALUE: ");
    scanf("%d", &end);

    for( i = start ; i <= end ; i++){
        sum += i;
    }
    printf("The sum of all numbers is : %d",sum);
}