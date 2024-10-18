#include <stdio.h>

int sum(int a, int b) {
int result = a + b;
return result;
}

int main () {


int x = 10;
int y = 20;
int z = sum(x,y);
printf("total sum is %d\n", z);



    return 0;
}
