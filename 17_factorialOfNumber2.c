//Program to calculate factorial of a given number using while loop.
#include<stdio.h>

int main(){
    int n;
    int factorial=1;
    printf("Enter the number:\n");
    scanf("%d",&n);
     if (n < 0)
    {
        printf("Wrong choice!");
    }
    else{
        int i=1;
        while(i<=n){
        factorial*=i;
        i++;
        }
        printf("Factorial of %d is%d", n, factorial);
    }
    return 0;
}
