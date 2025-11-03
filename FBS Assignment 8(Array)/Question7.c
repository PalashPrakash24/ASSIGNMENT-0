#include <stdio.h>
int main(){

    int farr[5] = {1,2,3,4,5};
    int sarr[5] = {11,12,13,14,15};
    int finarr[5];
    int i;    

    for(i = 0 ; i < 5 ; i++){
        finarr[i] = farr[i] + sarr[i];
    }

    printf("Sum of all arrays inside first and second array is : ");
    for(i = 0 ; i < 5 ; i++){
        printf("%d ",finarr[i]);
    }
}