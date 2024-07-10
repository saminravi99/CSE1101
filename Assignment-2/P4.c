// Problem-4:
// Write a C program that determines whether a given integer is even or odd. The program should prompt the user to enter an integer, then display whether it is even or odd.

// Test Input:
// Enter an integer: 37
// Expected Output:
// 37 is an odd number.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
