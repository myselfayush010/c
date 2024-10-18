#include <stdio.h>

// Function prototype
int factorial(int n);

// Function definition
int factorial(int n) {
    // Base condition
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number = 789; // Example number to calculate factorial
    int result = factorial(number);
    printf("The factorial of %d is %d\n", number, result);

    return 0;
}