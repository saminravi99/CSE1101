#include <stdio.h>

int main()
{
    // largest number from 2 numbers

    int a, b;

    printf("Enter 2 numbers: ");

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Largest number is: %d\n", a);
    }
    else
    {

        printf("Largest number is: %d\n", b);
    }
}