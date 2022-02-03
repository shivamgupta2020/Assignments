#include <stdio.h>

int main()
{
    int num1, num2, i;
    printf("Enter number 1 = ");
    scanf("%d", &num1);
    printf("Enter number 2 = ");
    scanf("%d", &num2);

    int max = num1 < num2 ? num2 : num1;

    i = max;

    while (1)
    {
        if (i % num1 == 0 && i % num2 == 0)
            break;
        i++;
    }

    printf("LCM of two numbers is %d", i);
}
