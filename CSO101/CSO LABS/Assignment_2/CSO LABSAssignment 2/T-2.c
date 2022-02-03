#include <stdio.h>

int main()
{
    //declaring variable
    float a;
    int b;

    //input number
    printf("Enter a number = ");
    scanf("%f", &a);

    //explicit conversion of input float number to int
    b = (int)a;

    //printing rightmost digit of the integral part
    printf("Rightmost digit of the integral part  = %d\n", b % 10);

    return 0;
}