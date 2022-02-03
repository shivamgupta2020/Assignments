#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaring variable
    double a;

    //input number
    printf("Enter a number = ");
    scanf("%lf", &a);
    
    //pinting square root upto 3 decimal places
    printf("Square root of the number = %.3lf\n", sqrt(a));
       
    return 0;

}