#include <stdio.h>

int main()
{
    // check the number is odd or even

    int num;

    printf("Enter a number: ");

    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}