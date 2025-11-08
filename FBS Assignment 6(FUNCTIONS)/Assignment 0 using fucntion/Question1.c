#include<stdio.h>

// Type 1: Without Parameters, No Return Value
void add(){
    int no1, no2, sum;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the first number: ");
    scanf("%d", &no1);
    printf("Enter the second number: ");
    scanf("%d", &no2);
    sum = no1 + no2;
    printf("The sum of no1 (%d) + no2 (%d) is: %d\n\n", no1, no2, sum);
}

// Type 2: With Parameters, No Return Value
void add2(int no1, int no2){
    int sum;
    printf("TYPE 2\nWith Parameters, No Return Value\n");
    sum = no1 + no2;
    printf("The sum of no1 (%d) + no2 (%d) is: %d\n\n", no1, no2, sum);
}

// Type 3: No Parameters, Return Value
int add3(){
    int no1, no2, sum;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the first number: ");
    scanf("%d", &no1);
    printf("Enter the second number: ");
    scanf("%d", &no2);
    sum = no1 + no2;
    return sum;
}

// Type 4: With Parameters, With Return Value
int add4(int no1, int no2){
    int sum;
    printf("TYPE 4\nWith Parameters, With Return Value\n");
    sum = no1 + no2;
    return sum;
}

int main(){
    add(); // Type 1
    add2(10, 20); // Type 2
    
    int sum1 = add3(); // Type 3
    printf("The returned sum (Type 3) is: %d\n\n", sum1);

    int sum2 = add4(10, 20); // Type 4
    printf("The returned sum (Type 4) is: %d\n\n", sum2);

    return 0;
}
