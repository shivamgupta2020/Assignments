#include <stdio.h>

int main()
{
    int num1, num2, i;
    printf("Enter number 1 = ");
    scanf("%d", &num1);
    printf("Enter number 2 = ");
    scanf("%d", &num2);

    int min = num1 < num2 ? num1 : num2;
    
    i = min;

    while (1)
    {
        if (num1 % i == 0 && num2 % i == 0)
        break;
        i--;
    }

    printf("GCD of two numbers = %d", i);
}