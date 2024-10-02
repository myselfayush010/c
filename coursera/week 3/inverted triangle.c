#include <stdio.h>

// Function prototype
void printInvertedTriangle(int n);

int main(void)
{
    int n;
    printf("Enter the height N: ");
    scanf("%d", &n);

    // Correct function call
    printInvertedTriangle(n);

    return 0;
}

// Function definition
void printInvertedTriangle(int n)
{
    int spaces = 0;
    int rowLen = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= rowLen; j++)
        {
            if (j <= spaces)
                printf(" ");
            else
                printf("*");
        }
        spaces++;
        rowLen = rowLen - 2;
        printf("\n");
    }
}