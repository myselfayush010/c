#include <stdio.h>
int main() {

    int N;
    printf("Enter the value of N - ");
    scanf("%llu", &N);

    int sum = 0;

    for (int i = 1; i <= N; ++i)
    {
        sum += i * i;
    }

    printf("Sum of squares from 1 to %llu is %llu\n", N, sum);

    return 0;
}