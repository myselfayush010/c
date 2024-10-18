#include <stdio.h>

// Function declarations
int isArmstrongNumber(int num);
int isPerfectNumber(int num);

int main()
{
    int num;
    printf("Input a number to check: ");
    scanf("%d", &num);

    if (isArmstrongNumber(num)) // Call the Armstrong check function
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    if (isPerfectNumber(num)) // Call the Perfect number check function
    {
        printf("%d is a Perfect number.\n", num);
    }
    else
    {
        printf("%d is NOT a Perfect number.\n", num);
    }

    return 0;
}

// Function to check if a number is an Armstrong number
int isArmstrongNumber(int num)
{
    int lastDigit, sum = 0, n = num;
    while (n != 0)
    {
        lastDigit = n % 10;                       // Find the last digit of the number
        sum += lastDigit * lastDigit * lastDigit; // Calculate the cube of the last digit and add to sum
        n = n / 10;                               // Remove the last digit of the number
    }
    return (num == sum); // Return 1 (True) if num is Armstrong, else 0 (False)
}

// Function to check if a number is a Perfect number
int isPerfectNumber(int num)
{
    int i, sum = 0;
    // There cannot be any divisor of num greater than num/2, excluding num itself
    for (i = 1; i <= num / 2; i++)
    {
        // If i is a divisor of num
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (num == sum); // Return 1 (True) if num is Perfect, else 0 (False)
}
