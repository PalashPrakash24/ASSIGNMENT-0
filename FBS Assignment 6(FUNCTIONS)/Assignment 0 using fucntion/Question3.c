#include <stdio.h>
void convertcelsiustofahrenheit(){
    float celsius;
    float fahrenheit;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %f", fahrenheit);
}
void convertcelsiustofahrenheit2(float celsius){
    float fahrenheit;
    printf("TYPE 2\nWith Parameters, No Return Value\n");
    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %f", fahrenheit);
}
int convertcelsiustofahrenheit3(){
    float celsius;
    float fahrenheit;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}
float convertcelsiustofahrenheit4(float celsius){
    float fahrenheit;
    printf("TYPE 4\nWith Parameters, Return Value\n");
    fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}
int main(){
    convertcelsiustofahrenheit();
    convertcelsiustofahrenheit2(100);
    float fahrenheit = convertcelsiustofahrenheit3();
    printf("The temperature in Fahrenheit is: %f", fahrenheit);
    float fahrenheit2 = convertcelsiustofahrenheit4(100);
    printf("The temperature in Fahrenheit is: %f", fahrenheit2);
}
