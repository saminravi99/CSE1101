#include <stdio.h>

int main()
{
    int a = 1, b = 2, add, sub, mul, div, mod;

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mod);

    // assignment
    b += 1;
    printf("Increment: %d\n", b);
    // remainder
    printf("Remainder: %d\n", a % b);
}