#include <stdio.h>

void calcareaofcircle() {
    int radius;
    float area;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("The area of the circle is: %.2f\n\n", area);
}

void calcareaofcircle2(int radius) {
    float area;
    printf("TYPE 2\nWith Parameters, No Return Value\n");
    area = 3.14 * radius * radius;
    printf("The area of the circle is: %.2f\n\n", area);
}

float calcareaofcircle3() {  // ✅ changed to float
    int radius;
    float area;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    return area;
}

float calcareaofcircle4(int radius) {  // ✅ changed to float
    float area;
    printf("TYPE 4\nWith Parameters, Return Value\n");
    area = 3.14 * radius * radius;
    return area;
}

int main() {
    calcareaofcircle();         // Type 1
    calcareaofcircle2(10);      // Type 2
    
    float area = calcareaofcircle3();   // Type 3
    printf("The area of the circle is: %.2f\n\n", area);
    
    float area2 = calcareaofcircle4(5); // Type 4
    printf("The area of the circle is: %.2f\n\n", area2);
    
    return 0;
}
