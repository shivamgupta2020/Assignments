#include <stdio.h>

int main()
{
    //declaring month number variable
    int monthnum;

    //input month number
    printf("Enter month number = ");
    scanf("%d", &monthnum);

    // printing month name corresponding to month number
    switch (monthnum)
    {
    case 1:
        printf("Month 1 is January");
        break;
    case 2:
        printf("Month 2 is Febuary");
        break;
    case 3:
        printf("Month 3 is March");
        break;
    case 4:
        printf("Month 4 is April");
        break;
    case 5:
        printf("Month 5 is May");
        break;
    case 6:
        printf("Month 6 is June");
        break;
    case 7:
        printf("Month 7 is July");
        break;
    case 8:
        printf("Month 8 is August");
        break;
    case 9:
        printf("Month 9 is September");
        break;
    case 10:
        printf("Month 10 is October");
        break;
    case 11:
        printf("Month 11 is November");
        break;
    case 12:
        printf("Month 12 is December");
        break;

    default:
        printf("Invalid entered number");
        break;
    }
    return 0;
}