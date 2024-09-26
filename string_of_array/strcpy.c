#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];

    strcpy(dest, src); // Copy src to dest

    printf("Copied string: %s\n", dest);

    return 0;
}