#include <stdio.h>
void findsquarecubeofnumber(){
    int num;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    int square = num * num;
    int cube = num * num * num;
    printf("The square of the number is: %d", square);
    printf("The cube of the number is: %d", cube);
}
void findsquarecubeofnumber2(int num){
    int square = num * num;
    int cube = num * num * num;
    printf("The square of the number is: %d", square);
    printf("The cube of the number is: %d", cube);
}
int findsquarecubeofnumber3(){
    int num;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    int square = num * num;
    int cube = num * num * num;
    return square, cube;
}
int findsquarecubeofnumber4(int num){
    int square = num * num;
    int cube = num * num * num;
    return square, cube;
}
int main(){
    findsquarecubeofnumber();
    findsquarecubeofnumber2(10);
    int square, cube = findsquarecubeofnumber3();
    printf("The square of the number is: %d", square);
    printf("The cube of the number is: %d", cube);
}