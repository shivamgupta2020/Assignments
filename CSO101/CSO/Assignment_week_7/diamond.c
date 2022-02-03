#include <stdio.h>

void main()
{
    int n;
    int space = 0;

    printf("\nEnter odd positive integer to form a dimaond pattern = ");
    scanf("%d", &n);
    printf("\n");

    if (n > 0 && n % 2 != 0)
    {
        space = (n - 1) / 2;
        for (int i = 1; i <= (n + 1) / 2; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++)
            {
                printf("*");
            }
            printf("\n");

            space--;
        }

        space = 1;
        for (int i = (n - 1) / 2; i >= 1; i--)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++)
            {
                printf("*");
            }
            printf("\n");

            space++;
        }

        printf("\n");
    }

    else
        printf("Invalid Input !\n");
}