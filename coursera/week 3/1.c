#include  <stdio.h>
int f(int x)
{
    printf("%d\n", 2*x);
    return 2*x;
}

int main()
{
    f(5);
    printf("running f(5)"); // ; lack of this we get error.
    return 0;
}