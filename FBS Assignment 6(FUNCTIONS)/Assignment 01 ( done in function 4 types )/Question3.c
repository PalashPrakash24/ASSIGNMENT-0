#include <stdio.h>

// 1. No arguments, no return value
void checkLeapYear1() {
    int year;
    printf("Type 1 - Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Type 1 - %d is a Leap Year\n", year);
    else
        printf("Type 1 - %d is NOT a Leap Year\n", year);
}

// 2. With arguments, no return value
void checkLeapYear2(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Type 2 - %d is a Leap Year\n", year);
    else
        printf("Type 2 - %d is NOT a Leap Year\n", year);
}

// 3. No arguments, returns a value
int getYear3() {
    int year;
    printf("Type 3 - Enter a year: ");
    scanf("%d", &year);
    return year;
}

// 4. With arguments, returns a value
int isLeapYear4(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    // Type 1
    checkLeapYear1();

    // Type 2
    int year2;
    printf("Type 2 - Enter a year: ");
    scanf("%d", &year2);
    checkLeapYear2(year2);

    // Type 3
    int year3 = getYear3();
    if ((year3 % 4 == 0 && year3 % 100 != 0) || (year3 % 400 == 0))
        printf("Type 3 - %d is a Leap Year\n", year3);
    else
        printf("Type 3 - %d is NOT a Leap Year\n", year3);

    // Type 4
    int year4;
    printf("Type 4 - Enter a year: ");
    scanf("%d", &year4);
    if (isLeapYear4(year4))
        printf("Type 4 - %d is a Leap Year\n", year4);
    else
        printf("Type 4 - %d is NOT a Leap Year\n", year4);

    return 0;
}
