// write a function to convert celsious temperature to fahrenheit.
#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);

    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
