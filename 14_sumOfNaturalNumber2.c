// Program to sum the first ten natural numbers using do while loop.
#include <stdio.h>

int main()
{
    int i = 1, n = 0;
    do
    {
        n = n + i;
        i++;
    } while (i <= 10);
    printf("The sum of ten natural number is %d.\n", n);
    return 0;
}