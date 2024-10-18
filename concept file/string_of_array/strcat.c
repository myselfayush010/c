// here we use strcat to add to strings together
// str1 storted str2 but if, we print str2 then only show str2 
#include <stdio.h>
int main () {
char str1[] = "hello, how are you?";
char str2[] = "I am fine, thank you!";
strcat(str1, str2);
printf(" %s\n", str1);


    return 0;
}