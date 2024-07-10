// Problem-3:
// Write a C program to find the maximum of two numbers. The program should prompt the user to enter two numbers, then determine and display the maximum among them.

// Test Input:Enter the first number: 24
// Enter the second number: 35
// Expected Output:
// The maximum of 24 and 35 is 35.

#include <stdio.h>

int main()
{
    int num1, num2, max;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    printf("The maximum of %d and %d is %d.\n", num1, num2, max);

    return 0;
}
