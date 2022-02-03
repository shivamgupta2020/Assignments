#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, i, temp, r, sum = 0;
    printf("Enter number 1 = ");
    scanf("%d", &num1);
    printf("Enter number 2 = ");
    scanf("%d", &num2);

    int max = num1 < num2 ? num2 : num1;
    int min = num1 < num2 ? num1 : num2;

    for (i = min; i <= max; i++)
    {
        temp = i;
        while (i>0)
        {
            r = i % 10;
            sum = sum + (r * r * r);
            i = i / 10;

        }
        if (temp == sum)

        {

            printf("%d", sum);
        }
    }
}
