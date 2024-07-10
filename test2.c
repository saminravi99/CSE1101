#include <stdio.h>

int main()
{

    float hour, payate, grossPay;

    printf("How many hours did you work: ");
    scanf("%f", &hour);

    printf("How much do you get paid per hour: ");
    scanf("%f", &payate);

    grossPay = hour * payate;
    printf("Your gross pay is: %.3f\n", grossPay);
}
