#include <stdio.h>
int main()
{
    int num_rows;
    printf("Enter the number of rows for which the pattern should be printed - ");
    scanf(" %d", &num_rows);

    for (int i = 1; i <= num_rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", (i + j + 1) % 2);
        }
        printf("\n");
    }
    return 0;
}