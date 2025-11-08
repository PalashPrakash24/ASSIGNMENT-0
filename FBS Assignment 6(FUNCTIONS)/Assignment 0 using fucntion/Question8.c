#include <stdio.h>
void calcperimeterofrectangle(){
    int length, breadth;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d", &length, &breadth);
    int perimeter = 2*(length+breadth);
    printf("The perimeter of the rectangle is: %d", perimeter);
}
void calcperimeterofrectangle2(int length, int breadth){
    int perimeter = 2*(length+breadth);
    printf("The perimeter of the rectangle is: %d", perimeter);
}
int calcperimeterofrectangle3(){
    int length, breadth;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d", &length, &breadth);
    int perimeter = 2*(length+breadth);
    return perimeter;
}
int calcperimeterofrectangle4(int length, int breadth){
    int perimeter = 2*(length+breadth);
    return perimeter;
}
int main(){
    calcperimeterofrectangle();
    calcperimeterofrectangle2(10, 20);
    int perimeter = calcperimeterofrectangle3();
    printf("The perimeter of the rectangle is: %d", perimeter);
    int perimeter2 = calcperimeterofrectangle4(10, 20);
    printf("The perimeter of the rectangle is: %d", perimeter2);
}