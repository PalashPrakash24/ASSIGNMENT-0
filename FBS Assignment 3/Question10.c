#include <stdio.h>
int main(){
    int num,f_num,l_num,sum;

    printf("Enter the number : ");
    scanf("%d",&num);

    l_num = num%10;

    int temp = num;
    for ( ; temp >= 10; temp /= 10);
    f_num = temp;

    sum = f_num + l_num;

    printf("Sum of firstdigit %d and lastdigit %d is : %d",f_num,l_num,sum);
}