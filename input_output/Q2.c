// explain %d and %f
// %d is used to read integer values
// %f is used to read float values

#include <stdio.h> // standard library
int main() {
    float a;
    int  b;
printf("Enter the value in decimal: ");
scanf("%f", &a);
printf("Enter the value in without decimal: ");
scanf("%d", &b);
printf("The value without decimal is %.2f and the value in without decimal is %d\n", a, b);
    return 0;
}