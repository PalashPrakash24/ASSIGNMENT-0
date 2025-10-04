#include<stdio.h>
int main(){
    int minutes;
    int hours;
    int remminutes;
    printf("Enter the minutes :");
    scanf("%d",&minutes);

    hours = minutes/60;
    remminutes = minutes % 60;

    printf("Total hours: %d\n",hours);
    printf("Total minutes: %d\n",remminutes);
}
