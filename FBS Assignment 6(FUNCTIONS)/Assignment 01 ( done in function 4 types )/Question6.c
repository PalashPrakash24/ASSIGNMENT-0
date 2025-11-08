#include <stdio.h>

// 1. No arguments, no return value
void checkCase1() {
    char ch;
    printf("Type 1 - Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Type 1 - '%c' is Uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("Type 1 - '%c' is Lowercase\n", ch);
    else
        printf("Type 1 - '%c' is not an alphabet\n", ch);
}

// 2. With arguments, no return value
void checkCase2(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        printf("Type 2 - '%c' is Uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("Type 2 - '%c' is Lowercase\n", ch);
    else
        printf("Type 2 - '%c' is not an alphabet\n", ch);
}

// 3. No arguments, returns a value
char getChar3() {
    char ch;
    printf("Type 3 - Enter a character: ");
    scanf(" %c", &ch);
    return ch;
}

// 4. With arguments, returns a value
int isUppercase4(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

int main() {
    // Type 1
    checkCase1();

    // Type 2
    char ch2;
    printf("Type 2 - Enter a character: ");
    scanf(" %c", &ch2);
    checkCase2(ch2);

    // Type 3
    char ch3 = getChar3();
    if (ch3 >= 'A' && ch3 <= 'Z')
        printf("Type 3 - '%c' is Uppercase\n", ch3);
    else if (ch3 >= 'a' && ch3 <= 'z')
        printf("Type 3 - '%c' is Lowercase\n", ch3);
    else
        printf("Type 3 - '%c' is not an alphabet\n", ch3);

    // Type 4
    char ch4;
    printf("Type 4 - Enter a character: ");
    scanf(" %c", &ch4);
    if (isUppercase4(ch4))
        printf("Type 4 - '%c' is Uppercase\n", ch4);
    else if (ch4 >= 'a' && ch4 <= 'z')
        printf("Type 4 - '%c' is Lowercase\n", ch4);
    else
        printf("Type 4 - '%c' is not an alphabet\n", ch4);

    return 0;
}
