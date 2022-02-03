#include <stdio.h>

int main()
{
    //declaring variable
    float a, b, c, max;
    printf("Enter number 1 = ");
    scanf("%f", &a);
    printf("Enter number 2 = ");
    scanf("%f", &b);
    printf("Enter number 3 = ");
    scanf("%f", &c);

    //comparing numbers using conditional operator
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);

    //printing largest number
    printf("largest number is : %f", max);

    return 0;
}