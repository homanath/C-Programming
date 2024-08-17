// WAP to determine whether a year is leap year or not.
#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 || year % 100 != 0) || (year % 400 == 0))
    {
        printf("This is a leap year.\n");
    }
    else
    {
        printf("This is not a leap year.\n");
    }
    return 0;
}