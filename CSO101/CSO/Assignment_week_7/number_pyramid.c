#include <stdio.h>

void main()
{
    int num, space = 0;

    printf("\nEnter odd positive integer to form a dimaond pattern = ");
    scanf("%d", &num);

    if (num > 0 && num % 2 != 0)
    {
        space = (num - 1) / 2;
        for (int i = 1; i <= (num + 1) / 2; i++)
        {
            int a = (1 - num) / 2;

            for (int j = 1; j <= space; j++)
            {
                printf("  ");
                a++;
            }

            for (int k = 1; k <= (2 * i - 1); k++)
            {
                if (a < 0)
                {
                    printf("%d ", -a);
                    a++;
                }
                else
                {
                    printf("%d ", a);
                    a++;
                }
            }

            printf("\n");
            space--;
        }

        space = 1;
        for (int i = (num - 1) / 2; i >= 1; i--)
        {
            int a = (1 - num) / 2;
            for (int j = 1; j <= space; j++)
            {
                printf("  ");
                a++;
            }

            for (int k = 1; k <= (2 * i - 1); k++)
            {
                if (a < 0)
                {
                    printf("%d ", -a);
                    a++;
                }
                else
                {
                    printf("%d ", a);
                    a++;
                }
            }

            printf("\n");
            space++;
        }
    }

    else
        printf("Invalid Input !\n\n");
}