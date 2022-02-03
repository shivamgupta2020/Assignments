#include <stdio.h>

int main()
{
    //declaring year variable
    int year;

    //input year
    printf("Enter year = ");
    scanf("%d", &year);

    //condition for leap year
    ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) ? printf("%d is a leap", year) : printf("%d is not a leap year", year);

    return 0;
}