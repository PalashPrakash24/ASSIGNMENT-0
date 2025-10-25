#include<stdio.h>
int main () {
    int i,num;

    printf("Enter the number for which you want the table of : ");
    scanf("%d", &num);


     for ( i = 1 ; i <= 10 ; i++){
        printf("%d\n",num*i);
     }
}