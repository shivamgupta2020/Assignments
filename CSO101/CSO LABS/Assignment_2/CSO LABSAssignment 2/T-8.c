#include<stdio.h>

int main()
{
    //declaring variable
    float f=10.33344;

    //printing number in given format
    printf("Exponential form upto 2 decimal places = %.2e\n", f);
    printf("Exponential form upto 4 decimal places = %.4e\n", f);
    printf("Exponential form upto 8 decimal places = %.8e\n", f);
    
}