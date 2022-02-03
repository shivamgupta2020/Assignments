// Submitted by:-
// Name: Shivam Gupta
// Roll no.: 21095106
// Dept: Electronics Engineering (B.Tech 1st year)
// Email: shivam.gupta.ece21@itbhu.ac.in

#include <stdio.h>

int main()
{
    // declaring variable
    float cel, fah;

    // input fahrenheit temperature
    printf("Enter temperatue(in fahrenheit) = ");
    scanf("%f", &fah);

    // fahrenheit to celcius
    cel = (fah - 32) * 5 / 9;

    // output celcius temperature
    printf("Tempertaure(in celcius) = %.2f\n", cel);

    return 0;
}