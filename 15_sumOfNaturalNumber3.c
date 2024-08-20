// Program to sum the first ten natural numbers using for loop.
#include <stdio.h>

int main()
{
    int n = 0;
    for (int i = 1; i <= 10; i++)
    {
        n = n + i;
    }
    printf("THe sum of first ten natural number is %d.\n", n);
    return 0;
}
