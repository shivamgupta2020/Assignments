#include <stdio.h>
#include <math.h>

int main()

{
    int num, even_sum = 0, odd_sum = 0, x, y;
    printf("Enter positive integer = ");
    scanf("%d", &num);

    if (num >= 0)
    {
        for (x = 0; (num / pow(10, x)) > 1; x++)
        {
        }
        if (x % 2 == 0)
        {
            for (y = 1; y <= x; y = y + 2)
            {
                even_sum = even_sum + ((num % (int)pow(10, y)) / pow(10, y - 1));
            }
            for (y = 2; y <= x; y = y + 2)
            {
                odd_sum = odd_sum + ((num % (int)pow(10, y)) / pow(10, y - 1));
            }
        }
        else
        {
            for (y = 2; y <= x; y = y + 2)
            {
                even_sum = even_sum + ((num % (int)pow(10, y)) / pow(10, y - 1));
            }
            for (y = 1; y <= x; y = y + 2)
            {
                odd_sum = odd_sum + ((num % (int)pow(10, y)) / pow(10, y - 1));
            }
        }
        printf("No. of digits = %d\n", x);
        printf("Sum of even placed digits = %d\n", even_sum);
        printf("Sum of odd placed digits = %d\n", odd_sum);
    }
    else
    {
        printf("Invalid input!");
    }
}
