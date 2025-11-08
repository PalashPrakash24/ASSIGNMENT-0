#include <stdio.h>
void calcareaoftriangle(){
    int base, height;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the base and height of the triangle: ");
    scanf("%d%d", &base, &height);
    int area = 0.5*base*height;
    printf("The area of the triangle is: %d", area);
}
void calcareaoftriangle2(int base, int height){
    int area = 0.5*base*height;
    printf("The area of the triangle is: %d", area);
}
int calcareaoftriangle3(){
    int base, height;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the base and height of the triangle: ");
    scanf("%d%d", &base, &height);
    int area = 0.5*base*height;
    return area;
}
int calcareaoftriangle4(int base, int height){
    int area = 0.5*base*height;
    return area;
}
int main(){
    calcareaoftriangle();
    calcareaoftriangle2(10, 20);
    int area = calcareaoftriangle3();
    printf("The area of the triangle is: %d", area);
    int area2 = calcareaoftriangle4(10, 20);
    printf("The area of the triangle is: %d", area2);
}