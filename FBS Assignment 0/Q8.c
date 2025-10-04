#include<stdio.h>
int main(){
    int length;
    int breadth;
    int perimeter;

    printf("Enter the length and breadth of the rectamgle: ");
    scanf("%d %d",&length,&breadth);

    perimeter = 2*(length+breadth);

    printf("The perimeter of the rectangle is: %d",perimeter);
}
