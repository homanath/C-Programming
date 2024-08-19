// WAP to generates the multiplication table of any number provided by the user in reverse order.
#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d in reverse order:\n", num);
    for (i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
