// Problem-2:
// Write a C program that calculates the average of three numbers. The program should prompt the user to enter three numbers, then calculate and display their average.

// Test Input:
// Enter the first number: 10
// Enter the second number: 15
// Enter the third number: 20
// Expected Output:
// The average of 10, 15, and 20 is 15.

#include <stdio.h>

int main()
{
    int num1, num2, num3, average;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The average of %d, %d, and %d is %d.\n", num1, num2, num3, average);

    return 0;
}
