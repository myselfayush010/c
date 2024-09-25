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
When we using string = character in scanf
 then we don't need to use & because  word.

*/