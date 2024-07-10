#include <stdio.h>

int main()
{
    int n;
    printf("Please Enter A Number : ");
    scanf("%d", &n);

    char c;
    getchar();
    printf("Please Enter A Character: ");
    scanf("%c", &c);
    printf("You character is : %c\n", c);
    printf("You number is : %d\n", n);
}