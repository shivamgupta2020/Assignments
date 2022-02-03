#include <stdio.h>

int main()
{
    //declaring variables
    int a, b;

    //input number
    printf("Enter Number = ");
    scanf("%d", &a);

    //input divisor
    printf("Enter divisor = ");
    scanf("%d", &b);

    int c = a / b;

    int remainder = a - b * c;

    //printing remainder
    remainder == 0 ? printf("Remainder = 0") : printf("Remainder = %d", remainder);
    return 0;
}