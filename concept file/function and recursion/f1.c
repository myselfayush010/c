#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int a, int b) {
    return a + b;
}


// functioin always above the main function
// nth element always start with 1 not 0

int main() {
    int a1 = 10; // Declare and initialize a1
    int b1 = 20; // Declare and initialize b1

    // Call the sum function and print the result
    printf("The sum of a1 and b1 is %d\n", sum(a1, b1));

    int a2 = 50;
    int a3 = 60;
    int c = a2 + a3; // Call the sum function and store the result in c
    printf("The sum of a2 and a3 is %d\n", c);

    return 0; // Return 0 to indicate successful execution
}

// c function - library example stdio.h
// user define function - like we create sum function

// change but not change memory location only goes copy of value