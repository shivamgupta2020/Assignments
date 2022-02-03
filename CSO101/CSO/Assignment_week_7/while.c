#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, i = 0;

    printf("\nEnter n  = ");
    scanf("%d", &n);
    printf("Enter m = ");
    scanf("%d", &m);

    while ((n) >= 0)
    {
        n = n - pow(m, i);
        if (n > 0)
            printf("%d, ", n);
        else
            printf("%d ", n);
        i++;
    }
    return 0;
}