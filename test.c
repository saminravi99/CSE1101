#include <stdio.h>
#define Pi 3.142

int main()
{
    const int x = 10;
    float a = 12.45;
    double b = 12.56;
    char c = 'c';

    printf("%d\n%f\n%lf\n%c\n", x, a, b, c);

    // x = 50;
    printf("%d\n", x);
    // printf("%f\n", a);
    // printf("%lf\n", b);
    // printf("%c\n", c);

    const float pi = 3.1416;

    // defined pi

    printf("%f\n", pi);

    printf("%.3f\n", Pi); // limiting the the digits after decimal point

    char d = 'd';

    printf("%c\n", d);
}