//WAP to calculate the tax.
#include <stdio.h>

int main()
{
    int income;
    float tax = 0;
    printf("Enter your income:\n");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = (250000 * 0.05) + (income - 500000) * 0.2;
    }
    else
    {
        tax = (250000 * 0.05) + (500000 * 0.2) + (income - 1000000) * 0.3;
    }

    printf("The total tax you need to pay is %.2f.", tax);
    return 0;
}
