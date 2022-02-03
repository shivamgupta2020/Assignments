#include <stdio.h>

int main()
{
    //declaring variable
    int num, firstDigit, secondDigit, thirdDigit, fourthDigit;
    char firstDigitchar, secondDigitchar, thirdDigitchar, fourthDigitchar;

    //input number
    printf("Enter a number = ");
    scanf("%d", &num);

    //digits of the number
    firstDigit = (num % 10000) / 1000;
    secondDigit = (num % 1000) / 100;
    thirdDigit = (num % 100) / 10;
    fourthDigit = (num % 10) / 1;

    //printing digit of the number
    printf("First digit = %d\n", firstDigit);
    printf("Second digit = %d\n", secondDigit);
    printf("Third digit = %d\n", thirdDigit);
    printf("Fourth digit = %d\n", fourthDigit);

    //printing sum of the digits of the number
    printf("Sum of digit = %d\n", firstDigit + secondDigit + thirdDigit + fourthDigit);

    return 0;
}