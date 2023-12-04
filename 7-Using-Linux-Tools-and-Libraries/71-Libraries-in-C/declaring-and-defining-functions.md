## Notes: Using Libraries in C

- Learning to use libraries in C, focusing on the math library as an example.
- Understanding the difference between a function declaration and a function definition.
```
#include <stdio.h>

// Function declaration
double square(double x);

int main() {
    double a = 2.5;
    double aSquared = square(a);
    printf("%g squared = %g\n", a, aSquared);
    return 0;
}

// Function definition
double square(double x) {
    return x * x;
}
```
**Function Example:**
- Program initializes variables 'a' and 'aSquared'.
- 'aSquared' is calculated using the function `square(a)`.

**Function Declaration:**
- A function declaration is the prototype, specifying return type, function name, and argument types.
- Necessary for the compiler to understand how to use the function.
- If not declared, the compiler assumes default types (often integer).

**Function Definition:**
- The entire function, including the code that defines its behavior.
- Function definition includes the return type, function name, and argument types.

**Implicit Declaration:**
- If a function is used before being declared or defined, the compiler issues a warning.
- Compiler assumes default types for the function, leading to potential errors.

**Example Errors:**
- Removing the function definition yields an "undefined reference" error.
- Removing the function declaration results in an "implicit declaration" warning.
- Conflicting data types can occur if the declared and defined types do not match.

**Separating Declaration and Definition:**
- It is possible to separate the function declaration and definition.
- Placing the declaration above the first use allows the compiler to understand how to use the function.
- Handy when dealing with multiple functions, making it clear which functions to put above others.

**Math Library:**
- Math functions, like all functions, have declarations and definitions.
- Functions are declared in one spot and defined in another.

