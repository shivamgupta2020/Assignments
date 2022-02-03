#include <stdio.h>

int main()
{
    //declaring variable
    float a;

    //input number
    printf("Enter a number = ");
    scanf("%f", &a);

    //rounding off number using ternary operator
    int roundInt = (a - (int)a) == ((int)a + 1 - a) ? (a + 1) : (a - (int)a) > ((int)a + 1 - a) ? a + 1 : a;

    //printing rounded off number                                                                                            
    printf("Round off number = %d\n", roundInt);

    return 0;
}