#include <stdio.h>

int reverseOfNumber(int n);
int isPalindrome(int n);

int main()
{
    int n;
    printf("Please Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is NOT a palindrome.\n", n);

    return 0;
}

int reverseOfNumber(int n)
{
    int remainder, n_reverse = 0;
    while (n != 0)
    {
        remainder = n % 10;           // Get the last digit
        n_reverse = n_reverse * 10 + remainder; // Add it to the reversed number
        n = n / 10;                   // Remove the last digit from n
    }
    return n_reverse;
}

int isPalindrome(int n)
{
    if (n == reverseOfNumber(n))      // Compare original number with its reverse
        return 1;                     // Return 1 (true) if they are equal
    else
        return 0;                     // Return 0 (false) if not
}
