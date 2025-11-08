#include <stdio.h>

// 1. No arguments, no return value
void checkEligibility1() {
    int age;
    printf("Type 1 - Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Type 1 - You are eligible to vote.\n");
    else
        printf("Type 1 - You are NOT eligible to vote.\n");
}

// 2. With arguments, no return value
void checkEligibility2(int age) {
    if (age >= 18)
        printf("Type 2 - You are eligible to vote.\n");
    else
        printf("Type 2 - You are NOT eligible to vote.\n");
}

// 3. No arguments, returns a value
int getAge3() {
    int age;
    printf("Type 3 - Enter your age: ");
    scanf("%d", &age);
    return age;
}

// 4. With arguments, returns a value
int isEligible4(int age) {
    return age >= 18;
}

int main() {
    // Type 1
    checkEligibility1();

    // Type 2
    int age2;
    printf("Type 2 - Enter your age: ");
    scanf("%d", &age2);
    checkEligibility2(age2);

    // Type 3
    int age3 = getAge3();
    if (age3 >= 18)
        printf("Type 3 - You are eligible to vote.\n");
    else
        printf("Type 3 - You are NOT eligible to vote.\n");

    // Type 4
    int age4;
    printf("Type 4 - Enter your age: ");
    scanf("%d", &age4);
    if (isEligible4(age4))
        printf("Type 4 - You are eligible to vote.\n");
    else
        printf("Type 4 - You are NOT eligible to vote.\n");

    return 0;
}
