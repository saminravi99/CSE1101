// Problem 2:
// Write a C program that takes to number as user input, then calculates the summation of the two numbers.

// Test Input:
// Enter first number: 25
// Enter second number: 11

// Expected Output:
// Sum of 25 and 11 is 36.

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Please Enter Number 1:");
    scanf("%d", &num1);

    printf("Please Enter Number 2:");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("Summation: %d\n", sum);
}