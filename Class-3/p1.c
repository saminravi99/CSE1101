#include <stdio.h>
#include <math.h>

int main()
{
    int base = 2, power = 7;

    int ans = pow(base, power);

    printf("%d\n", ans);
    printf("%d^%d = %d\n", base, power, ans);

    int num = 2;

    float sqrt_ans = sqrt(num);

    printf("Square root of %d is: %.2f\n", num, sqrt_ans);
}