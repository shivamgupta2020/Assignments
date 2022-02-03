#include <stdio.h>

int main()
{
    // declaring variables
    int a;

    // input number
    printf("Enter a number = ");
    scanf("%d", &a);

    // finding odd even number
    a % 2 == 0 ? printf("%d is a even number", a) : printf("%d is a odd number", a);
    return 0;
}