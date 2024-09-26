## arthematic operator
addition +
substraction -
division /
multiplication * 
module %


#### Key Concepts:
1. **Modulus Operator (`%`)**:
   - Used to find the remainder of a division operation.
   - Example: `a % b` gives the remainder when `a` is divided by `b`.

2. **Properties of Modular Arithmetic**:
   - `(a + b) % c = ((a % c) + (b % c)) % c`
   - `(a - b) % c = ((a % c) - (b % c) + c) % c`
   - `(a * b) % c = ((a % c) * (b % c)) % c`

#### Example Code:
```c
#include <stdio.h>

int main() {
    int a = 10, b = 3, c = 7;

    // Using modulus operator
    printf("10 %% 3 = %d\n", a % b); // Output: 1

    // Properties of modular arithmetic
    int sum_mod = (a + b) % c;
    int sum_mod_property = ((a % c) + (b % c)) % c;
    printf("(10 + 3) %% 7 = %d\n", sum_mod); // Output: 6
    printf("((10 %% 7) + (3 %% 7)) %% 7 = %d\n", sum_mod_property); // Output: 6

    return 0;
}
```

### Notes:
- **Integer Division**: When using the division operator `/` with integers, the result is also an integer (fractional part is discarded).
- **Modulus with Negative Numbers**: The result of the modulus operation can vary depending on the implementation, especially with negative numbers. Generally, the result has the same sign as the dividend (first operand).

### Practical Applications:
- **Cryptography**: Modular arithmetic is fundamental in algorithms like RSA.
- **Hash Functions**: Often use modulus to ensure hash values fall within a certain range.
- **Circular Buffers**: Use modulus to wrap around indices.

These notes should help you understand and use arithmetic and modular operations in C. If you have any questions or need further clarification, feel free to ask!