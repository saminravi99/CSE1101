// Problem 1:
// Write a C program that multiplies two predefined fractional numbers. The fractional numbers should be declared and initialized in the code itself. After performing the multiplication of these two floating point numbers, the program should display the result.

// Example:
// Let's say the two numbers are 15.534 and 20.186. The program should calculate the product of these numbers and display it.

// Expected Output:
// The product of 15.534 and 20.186 is 313.569324

#include <stdio.h>

int main()
{
    float num1 = 15.534;
    float num2 = 20.186;

    float multiply = num1 * num2;

    printf("Multiplied Value : %f", multiply);
}