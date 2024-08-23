// Program using a function to  find the average of three number.
#include <stdio.h>

float calculateAverage(int num1, int num2, int num3)
{
    float average = (num1 + num2 + num3) / 3.0;
    return average;
}

int main()
{
    int number1, number2, number3;
    float average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    average = calculateAverage(number1, number2, number3);

    printf("The average of %d, %d, and %d is: %.2f\n", number1, number2, number3, average);

    return 0;
}
