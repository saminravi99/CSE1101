#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Please Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Please Enter Number 2 : ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int subtraction = num1 - num2;

    printf("Your first number is : %d\nyour second number : %d\nthe sum of your numbers are %d\nthe subtraction of your numbers are %d\n", num1, num2, sum, subtraction);
}