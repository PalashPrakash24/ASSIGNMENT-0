#include <stdio.h>
void findaverageoffive(){
    int a,b,c,d,e;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter all five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int average = (a+b+c+d+e)/5;
    printf("The average of five numbers is: %d", average);
}
void findaverageoffive2(int a, int b, int c, int d, int e){
    int average = (a+b+c+d+e)/5;
    printf("The average of five numbers is: %d", average);
}
int findaverageoffive3(){
    int a,b,c,d,e;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter all five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int average = (a+b+c+d+e)/5;
    return average;
}
int findaverageoffive4(int a, int b, int c, int d, int e){
    int average = (a+b+c+d+e)/5;
    return average;
}
int main(){
    findaverageoffive();
    findaverageoffive2(10, 20, 30, 40, 50);
    int average = findaverageoffive3();
    printf("The average of five numbers is: %d", average);
    int average2 = findaverageoffive4(10, 20, 30, 40, 50);
    printf("The average of five numbers is: %d", average2);
}   