// WAP to determine whether a character enter by user is  uppercase or lowercase.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character you want to determine:\n");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) // ASCII range for uppercase letters (A-Z)
    {
        printf("This is an uppercase letter.\n");
    }
    else if (ch >= 97 && ch <= 122) // ASCII range for lowercase letters (a-z)
    {
        printf("This is a lowercase letter.\n");
    }
    else
    {
        printf("You entered a non-alphabetic character.\n");
    }

    return 0;
}
