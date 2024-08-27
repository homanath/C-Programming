// Function to calculate the nth Fibonacci number using recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Enter the position of the Fibonacci series you want to find:\n ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
