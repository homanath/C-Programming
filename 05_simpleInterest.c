#include <stdio.h>

int main()
{
    float p;
    int t, r;

    printf("Enter the principle\n");
    scanf("%f", &p);
    printf("Enter the time\n");
    scanf("%d", &t);
    printf("Enter the rate\n");
    scanf("%d", &r);
    printf("The value of simple interest is %f", (p * t * r) / 100);
    return 0;
}
