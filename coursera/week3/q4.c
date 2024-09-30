#include <stdio.h>

int main()
{
    unsigned long long int a, b, result = 1;

    printf("Enter two positive numbers (a and b): ");
    scanf("%llu %llu", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Both numbers must be positive.\n");
        return 0;
    }

    for (unsigned long long int i = 0; i < b; i++)
    {
        result *= a;
    }

    printf("%llu^%llu = %llu\n", a, b, result);

    return 0;
}