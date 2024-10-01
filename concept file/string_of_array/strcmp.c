#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "computer";
    
    int compare = strcmp(str1, str2);
    if (compare < 0)
    printf("str1 is less than str2\n");
    else if (compare > 0) {
    printf("str1 is greater than str2\n");  
    }
   
    else {
    printf("str1 is equal to str2\n"); 
    }
   

    


    return 0;
}