Char variable[] = 'string'
Box = empty array
%c = single character  %s multi character (string)

variable 
int a; variable declared
a = 10; variable assigned
int a = 10; variable initialized
assign value and intialize  after variable declared.
Data Types
float - decimal = 2.3 
you should use %.2f print only last 2 digit.
char - character = a, A, b, B ....z, Z
%c - print only single character
%s -  print multi character 
scanf read string by %s
int - integer 0,1,2,3....infinity
%d - simple to use
size 
sizeof(char)
sizeof(int)
sizeof(char/str)
comment
// single line comment
/* 
    multi line comment
*/
Escape and new line
escape - \ add extra backslash
newline - \n

Return  = no error | end of success 
Return 1 = error detection and code failure

 a = 9;  | = use for assign value

C Comparison Operators:

    1. == (Equal To)
    2. != (Not Equal To)
    3. > (Greater Than)
    4. < (Less Than)
    5. >= (Greater Than or Equal To)
    6. <= (Less Than or Equal To)

Break and Continue:

    1. break: Stops the program's execution within a loop and transfers control to the statement after the loop.
    2. continue: Skips certain code within a loop and moves to the next iteration.

sizeof() Operator:

    1. Returns the size (in bytes) of a variable, data type, or expression.
    2. Helps determine memory allocation and usage.
sizeof() Uses:

    1. Calculate array size: sizeof(array) / sizeof(array[0])
    2. Determine structure size: sizeof(structure_name)
    3. Check data type size: sizeof(data_type)
    4. Allocate memory dynamically: malloc(sizeof(data_type))




char name[] = "";  // Empty string
char *ptr = NULL;  // Empty pointer

void greet() {
    printf("Hello!");
}
// No return value from greet()

Real-world analogy:
char var[] is like an empty notebook.
NULL is like a non-existent page.
void func() is like a message without a response.
Quick Recap:

    1. NULL: Non-existent, invalid, or empty pointer.
    2. char ayu[]: Empty character array (string).
    3. void function(): Function without a return value/response.

Concepts 
Pointer = memory address 
Arrays = collection of values
Function - reusable code blocks


Real-world Analogy: - copy vs original 

Pass by Value: Photocopying a document.
Pass by Reference: Sharing the original document.

When to Use:
Pass by Value: Temporary changes.
Pass by Reference: Permanent changes.

