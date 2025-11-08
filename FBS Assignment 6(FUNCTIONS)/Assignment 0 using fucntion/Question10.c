#include <stdio.h>
void calcpercentageoffive(){
    int sub1, sub2, sub3, sub4, sub5;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the marks of the five subjects: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    int percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("The percentage of the five subjects is: %d", percentage);
}
void calcpercentageoffive2(int sub1, int sub2, int sub3, int sub4, int sub5){
    int percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("The percentage of the five subjects is: %d", percentage);
}
int calcpercentageoffive3(){
    int sub1, sub2, sub3, sub4, sub5;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the marks of the five subjects: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    int percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    return percentage;
}
int calcpercentageoffive4(int sub1, int sub2, int sub3, int sub4, int sub5){
    int percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    return percentage;
}
int main(){
    calcpercentageoffive();
    calcpercentageoffive2(10, 20, 30, 40, 50);
    int percentage = calcpercentageoffive3();
    printf("The percentage of the five subjects is: %d", percentage);
    int percentage2 = calcpercentageoffive4(10, 20, 30, 40, 50);
    printf("The percentage of the five subjects is: %d", percentage2);
}