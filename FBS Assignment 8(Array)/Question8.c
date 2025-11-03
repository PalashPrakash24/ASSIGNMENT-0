#include<stdio.h>
int main () {
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int mergedarr[10],i,j;

    for(i = 0 ; i < 5 ; i++){        // loop for copying first array
        mergedarr[i] = arr1[i];
    }
    for(j = 0 ; j < 5 ; j++){       // loop for copying second array
        mergedarr[i+j]= arr2[j];
    }

    printf("Merged Array : ");
    for(i = 0 ;i < 10 ; i++){       // loop for printng final merged array
        printf("%d ",mergedarr[i]);
    }
}