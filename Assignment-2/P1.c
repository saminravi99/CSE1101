// Problem-1:
// Write a C program to calculate the area of a rectangle. The program should prompt the user to enter the length and width of the rectangle, then calculate and display the area.

// Test Input:
// Enter the length of the rectangle: 5
// Enter the width of the rectangle: 8

// Expected Output:
// The area of the rectangle with length 5 and width 8 is 40 square units.

#include <stdio.h>

int main()
{
    int length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;

    printf("The area of the rectangle with length %d and width %d is %d square units.\n", length, width, area);

    return 0;
}
