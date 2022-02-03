#include <stdio.h>

void main()
{
    int num, prime = 0, composite = 0;

    printf("\nKeep on entering positive numbers , for exit enter -1 = \n");
    scanf("%d", &num);

    if (num != -1)
    {
        do
        {
            int count = 0;

            if (num < 0)
            {
                printf("Invalid input!\nEnter postive number only\n");
            }

            else
            {
                for (int i = 1; i <= num; i++)
                {
                    if (num % i == 0)
                        count++;
                }

                if (count == 2)
                    prime++;

                if (count > 2)
                    composite++;
            }

            scanf("%d", &num);
        } while (num != -1);

        printf("\nNumber of prime numbers entered = %d ", prime);
        printf("\nNumber of composite numbers entered = %d\n\n", composite);
    }

    else
    {
        printf("\nNumber of prime numbers entered = %d ", prime);
        printf("\nNumber of composite numbers entered = %d \n", composite);
    }
}