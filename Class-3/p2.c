// Draw flow chart to find summation for the following series: 1 + 2 + 3 + .... + n
// 3^10 + 3^20 + 3^30 + .... + 3^n

#include <stdio.h>

int main()
{
    int n, i;
    long long sum = 0;
    long long term = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term = term * 3;
        sum = sum + term;
    }

    printf("The sum of the series is: %lld\n", sum);

    return 0;
}