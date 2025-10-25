#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter the character: ");
    scanf("%c", &alpha);
    if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
    {
        if (alpha >= 'A' && alpha <= 'Z')
        {
            alpha = alpha + ('a' - 'A');
        }
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        {
            printf("%c is a vowel.\n", alpha);
        }
        else
        {
            printf("%c is a consonant.\n", alpha);
        }
    }
}