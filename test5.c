#include <stdio.h>

int main()
{
    // largest number from 3 numbers

    int a, b, c;

    printf("Enter 3 numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Largest number is: %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("Largest number is: %d\n", b);
    }
    else
    {
        printf("Largest number is: %d\n", c);
    }
}