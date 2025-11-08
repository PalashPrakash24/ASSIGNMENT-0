#include <stdio.h>
void convertminutesintohoursandminutes(){
    int minutes;
    printf("TYPE 1\nWithout Parameters, No Return Value\n");
    printf("Enter the minutes: ");
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int remainingminutes = minutes % 60;
    printf("The hours is: %d", hours);
    printf("The remaining minutes is: %d", remainingminutes);
}
void convertminutesintohoursandminutes2(int minutes){
    int hours = minutes / 60;
    int remainingminutes = minutes % 60;    
    printf("The hours is: %d", hours);
    printf("The remaining minutes is: %d", remainingminutes);
}
int convertminutesintohoursandminutes3(){
    int minutes;
    printf("TYPE 3\nNo Parameters, Return Value\n");
    printf("Enter the minutes: ");
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int remainingminutes = minutes % 60;
    return hours, remainingminutes;
}
int convertminutesintohoursandminutes4(int minutes){
    int hours = minutes / 60;
    int remainingminutes = minutes % 60;
    return hours, remainingminutes;
}
int main(){
    convertminutesintohoursandminutes();
    convertminutesintohoursandminutes2(120);
    int hours, remainingminutes = convertminutesintohoursandminutes3();
    printf("The hours is: %d", hours);
    printf("The remaining minutes is: %d", remainingminutes);
    int hours, remainingminutes = convertminutesintohoursandminutes4(120);
    printf("The hours is: %d", hours);
    printf("The remaining minutes is: %d", remainingminutes);
}