// Recursive function to count the number of digits

#include <stdio.h>

int count(int number) {
    if (number == 0) {
        return 0;
    }

    return 1 + count(number / 10);
}

int main() {
    int number;

    printf("Enter a number:\n ");
    scanf("%d", &number);

    if (number == 0) {
        printf("The number of digits is: 1\n");
    } else {
        if (number < 0) {
            number = -number;
        }

        printf("The number of digits is: %d\n", count(number));
    }

    return 0;
}
