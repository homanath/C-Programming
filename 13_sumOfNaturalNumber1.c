// Program to sum the first ten natural numbers using while loop.
#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    while (i <= 10)
    {
        sum += i;
        i++;
    }

    printf("The sum of the first ten natural numbers is %d.\n", sum);

    return 0;
}
