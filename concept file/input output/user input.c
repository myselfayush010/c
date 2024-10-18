#include <stdio.h> // standard library
int main() {
    int age;
    char name[20]; // declare as a character array
printf("Enter your age: ");
scanf("%d", &age);
printf("Enter your name: ");
scanf("%s", name); // use %s to read string
printf("Your age is %d and your name is %s", age, name);

    return 0;
}

/*
#include <stdio.h>

int main() {
    // Character example
    char ch = 'A'; //Single character
    printf("Character: %c\n", ch);

    // String example
    char str[] = "Hello"; // Collection of characters forming a word
    printf("String: %s\n", str);

    return 0;
}
*/

/*
When we are using string = character in scanf
 then we don't need to use & because  word.

*/