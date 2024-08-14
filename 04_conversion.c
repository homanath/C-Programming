//program to convert  a temperature from Celsius to Fahrenheit:
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Output the result
    printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}


