#include <stdio.h>

// 1. No arguments, no return value
void calculateSalary1() {
    float basic, da, ta, hra, total;
    printf("Type 1 - Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    total = basic + da + ta + hra;
    printf("Type 1 - Total Salary = %.2f\n", total);
}

// 2. With arguments, no return value
void calculateSalary2(float basic) {
    float da, ta, hra, total;

    if (basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    total = basic + da + ta + hra;
    printf("Type 2 - Total Salary = %.2f\n", total);
}

// 3. No arguments, returns a value
float getBasic3() {
    float basic;
    printf("Type 3 - Enter basic salary: ");
    scanf("%f", &basic);
    return basic;
}

// 4. With arguments, returns a value
float calculateTotalSalary4(float basic) {
    float da, ta, hra;

    if (basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    return basic + da + ta + hra;
}

int main() {
    // Type 1
    calculateSalary1();

    // Type 2
    float basic2;
    printf("Type 2 - Enter basic salary: ");
    scanf("%f", &basic2);
    calculateSalary2(basic2);

    // Type 3
    float basic3 = getBasic3();
    float da3, ta3, hra3, total3;
    if (basic3 <= 5000) {
        da3 = 0.10 * basic3;
        ta3 = 0.20 * basic3;
        hra3 = 0.25 * basic3;
    } else {
        da3 = 0.15 * basic3;
        ta3 = 0.25 * basic3;
        hra3 = 0.30 * basic3;
    }
    total3 = basic3 + da3 + ta3 + hra3;
    printf("Type 3 - Total Salary = %.2f\n", total3);

    // Type 4
    float basic4;
    printf("Type 4 - Enter basic salary: ");
    scanf("%f", &basic4);
    float total4 = calculateTotalSalary4(basic4);
    printf("Type 4 - Total Salary = %.2f\n", total4);

    return 0;
}
