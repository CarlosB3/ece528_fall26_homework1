# ece528_fall26_homework1

## 1. (a) What is the difference between a compiler and an interpreter?

The compilee translates the source code into executable machine code and a interpreter translates and executes the program one statement at a time.

### (b) What is the output of a C program’s `main()` function by default?

The `main()` function has an `int` return type by default.

## 2. What are header files in C and what is the purpose of the `#include` directive?

A header file contains C declarations and macro definitions that can be shared by a source file. `#include` directive tells the C preprocessor to include the specified header files so it can access its declarations & macros.

## 3. Explain how to declare and define a function in C. What is the purpose of the `return` statement in a function? Can a function have more than one return statement?

A function declaration, or prototype, specifies the function name, return type, and parameters. A function definition includes the function body containing the statements that specify what the function does. The return statement exits the function and can return a value to the calling function. A function can have more than one return statement, but executing one immediately exits that function call.

## 4. What is type casting? Provide an example C function that demonstrates explicit type casting from `double` to `int`. The function should accept two arguments that are both `double` and return their sum as an integer.

Type casting converts value from one data type to another.

```c
int AddDoubles(double a, double b)
{
    return (int)(a+b);
}
```

## 5. Explain the difference between local and global variables. Provide an example of each.

A local variable can only be accessed in that specific function. A global variable can be accessed throughout the program.

```c
const int clk_Gev = 50000;  // Global

int main(void)
{
    int x = 123;            // Local

    return 0;
}
```

## 6. How are strings declared and initialized in C? What is the role of the null terminator `'\0'`?

String is declared as a character array, `char msg[] = "Hello";`. `\0` is the null terminator meaning it tells the character string to end.

## 7. What is a pointer in C? How do you pass a pointer to a function? What advantages are there to passing a pointer instead of a value?

A pointer is a variable that stores the address of a value. Declare the function parameter using `*` and call the function using the variable address. Advantages allow function modify original variables, avoids copies of large arrays or structures. Passing arrays & memory buffers efficiently. Allowing a function to provide more than 1 result through pointer parameters. Accessing memory mapped registers in embedded systems.

## 8. What does the `*` operator and the `&` operator do in the context of pointers?

`&` returns the memory address of a variable while `*` either declares a pointer or dereferences a pointer to access the value stored at its address.

## 9. What is the difference between `while` and `do…while` loops?

`while` checks its condition before executing the loop body. `do while` checks its condition after executing the loop body.

## 10. What does the `break` statement do? How is it different from the `continue` statement?

Break statement completely exits the current loop or switch statement. Continue statement only skips the remainder of the current loop iteration & begins the next iteration.

## 11. Explain the use of bitwise operators (i.e. `&`, `|`, `^`, `~`, `<<`, `>>`) in C. Which bitwise operators can be used to set, clear, toggle, or check a specific bit in an integer variable?

Bitwise operators manipulate the individual bits of an integer. `|` (OR) with a mask sets the bit, `&` (AND) with an inverted mask clears the bit, `^` (XOR) with a mask toggles the bit, and `(value & mask) != 0` checks the bit. `~` inverts all bits, `<<` shifts bits left, and `>>` shifts bits right.

## 12. What is the purpose of the `PxSEL0` and `PxSEL1` GPIO registers? Write two statements that select the GPIO function for the pins P1.0 and P1.7.

`PxSEL0` & `PxSEL1` registers select the function assigned to each MSP432 port pin.

```c
P1->SEL0 &= ~0x81;
P1->SEL1 &= ~0x81;
```

## 13. Write a `void` function named `P1_1_and_P1_4_Init` that configures P1.1 and P1.4 as GPIO inputs with pull-up resistors enabled.

```c
void P1_1_and_P1_4_Init(void)
{
    P1->SEL0 &= ~0x12;
    P1->SEL1 &= ~0x12;
    P1->DIR &= ~0x12;
    P1->OUT |= 0x12;
    P1->REN |= 0x12;
}
```

## 14. Write a `void` function named `Buttons_Init` that configures the following pins as GPIO inputs with pull-down resistors enabled.

- P3.1
- P3.6
- P5.0
- P5.4

```c
void Buttons_Init(void)
{
    P3->SEL0 &= ~0x42;
    P3->SEL1 &= ~0x42;
    P3->DIR &= ~0x42;
    P3->OUT &= ~0x42;
    P3->REN |= 0x42;

    P5->SEL0 &= ~0x11;
    P5->SEL1 &= ~0x11;
    P5->DIR &= ~0x11;
    P5->OUT &= ~0x11;
    P5->REN |= 0x11;
}
```

## 15. Write a `void` function named `LEDs_Init` that configures the following pins as GPIO outputs. Initialize the pins to zero.

- P7.0 to P7.7

```c
void LEDs_Init(void)
{
    P7->SEL0 &= ~0xFF;
    P7->SEL1 &= ~0xFF;
    P7->OUT &= ~0xFF;
    P7->DIR |= 0xFF;
}
```
