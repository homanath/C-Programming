// WAP to generate multiplication table of a number provided by a user.
#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
