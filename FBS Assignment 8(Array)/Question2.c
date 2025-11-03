#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,search,found = 0;
    printf("enter the number you want to search : ");
    scanf("%d",&search);

    for (int i = 0 ; i < 10 ; i++){
        if(arr[i] == search){
            found = 1;
            printf("Number %d found at position %d.\n",search,i);
            break;
        }
    }
    if (found == 0)
    {
        printf("Number %d not found in the array",search);
    }
    return 0;
}