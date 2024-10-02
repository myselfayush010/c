#include <stdio.h>
#include <string.h>
int main ()  {
printf("hello, how are you choose good or bad ");
char a[100];
scanf("%s", a);
if (strcmp(a, "good") == 0) {  // strcmp means compare

// why zero i wrote because i want equal to zero as good.
// if, programme fine good then print nice rather than ivalid except bad
// >0 greater than 0 |  <0 less than 0 |== 0 equal to zero

    printf("nice"); }
    
    else if (strcmp(a,"bad") == 0) {

    printf("i hope you will good soon");
    
    }
    else {
        printf("invalid");
    }
    return 0;
}