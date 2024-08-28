// Function to calculate the sum of first n natural numbers using recursion

#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;  
    } else {
        return n + sumOfNaturalNumbers(n - 1);  
    }
}

int main() {
    int n;
    
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }
    
    return 0;
}
