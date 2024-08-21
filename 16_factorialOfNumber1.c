//Program to calculate factorial of a given number using for loop.
#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;
    printf("Entere the number:\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Wrong choice!");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
    }
    printf("Factorial of %d is%d", n, factorial);
    return 0;
}
