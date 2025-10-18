//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char v;
    printf("Enter a character: ");
    scanf("%c", &v);
    {
        // Check for vowels add capital and small letters
        if (v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U' ||
            v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
        {
            printf("%c is a vowel.\n", v);
        }
        else
        {
            printf("%c is a consonant.",v);
        }
    }
    return 0;
}