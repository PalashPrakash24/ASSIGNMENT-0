#include <stdio.h>
#include <ctype.h>  // for tolower()

// 1. No arguments, no return value
void checkVowel1() {
    char ch;
    printf("Type 1 - Enter a character: ");
    scanf(" %c", &ch);
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Type 1 - '%c' is a Vowel\n", ch);
    else if ((ch >= 'a' && ch <= 'z'))
        printf("Type 1 - '%c' is a Consonant\n", ch);
    else
        printf("Type 1 - '%c' is not an alphabet\n", ch);
}

// 2. With arguments, no return value
void checkVowel2(char ch) {
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Type 2 - '%c' is a Vowel\n", ch);
    else if ((ch >= 'a' && ch <= 'z'))
        printf("Type 2 - '%c' is a Consonant\n", ch);
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
int isVowel4(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    // Type 1
    checkVowel1();

    // Type 2
    char ch2;
    printf("Type 2 - Enter a character: ");
    scanf(" %c", &ch2);
    checkVowel2(ch2);

    // Type 3
    char ch3 = getChar3();
    ch3 = tolower(ch3);
    if (ch3 == 'a' || ch3 == 'e' || ch3 == 'i' || ch3 == 'o' || ch3 == 'u')
        printf("Type 3 - '%c' is a Vowel\n", ch3);
    else if ((ch3 >= 'a' && ch3 <= 'z'))
        printf("Type 3 - '%c' is a Consonant\n", ch3);
    else
        printf("Type 3 - '%c' is not an alphabet\n", ch3);

    // Type 4
    char ch4;
    printf("Type 4 - Enter a character: ");
    scanf(" %c", &ch4);
    if (isVowel4(ch4))
        printf("Type 4 - '%c' is a Vowel\n", ch4);
    else if ((tolower(ch4) >= 'a' && tolower(ch4) <= 'z'))
        printf("Type 4 - '%c' is a Consonant\n", ch4);
    else
        printf("Type 4 - '%c' is not an alphabet\n", ch4);

    return 0;
}
