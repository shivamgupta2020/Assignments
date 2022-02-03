#include <stdio.h>
#include <math.h>

int main()
{
    // declaring variables
    float a, b, c;
    double r1, r2;

    // input cofficient of quadratic equation
    printf("Enter a , b , c (ax^2+bx+c)= \n");
    scanf("%f%f%f", &a, &b, &c);

    // using extra variable for simplification
    r1 = -b / 2 * a;
    r2 = (b * b - 4 * a * c) / 2 * a;

    // checking nature of root and printing roots of the equation
    (b * b >= 4 * a * c) ? printf("Equation has 2 real root.\nReal root of the equation are = \n%.2lf\n%.2lf ", r1 + sqrt(r2), r1 - sqrt(r2)) : printf("Equation has 2 Imaginary root.\nImaginary root of the equation are = \n%.2lf + i%.2lf\n%.2lf - i%.2lf ", r1, sqrt(-r2), r1, sqrt(-r2));

    return 0;
    
}