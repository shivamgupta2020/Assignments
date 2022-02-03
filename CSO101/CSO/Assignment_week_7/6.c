#include <stdio.h>
#include <math.h>

void main()
{
    double x, result, percent, sum = 1;
    int n;

    printf("   1   \n");
    printf("------- = 1 + x^2 + x^3 + x^4 +......+ x^n +...... upto infinity .\n");
    printf(" 1 - x \n");

    printf("\nEnter the value of x in the interval (-1,1) = ");
    scanf("%lf", &x);

    if (x > -1 && x < 1)
    {
        printf("Enter value of n (natural number) = ");
        scanf("%d", &n);

        if (n > 0)
        {
            result = 1 / (1 - x);

            printf("\nThe actual value of the expression is = %lf .\n", result);

            while (n > 0)
            {
                sum += pow(x, n);
                n--;
            }

            printf("The sum of the series upto n terms is = %lf .\n", sum);

            percent = (sum * 100) / result;

            if (percent >= 90)
                printf("\nThe result is more than 90 percent accurate .\n\n");

            else
                printf("\nThe result is less than 90 percent accurate .\n\n");
        }

        else
            printf("Invalid input!\n\n");
    }

    else
        printf("Invalid input!\n\n");
}