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

    //declaring number as characters
    firstDigitchar = firstDigit + '0';
    secondDigitchar = secondDigit + '0';
    thirdDigitchar = thirdDigit + '0';
    fourthDigitchar = fourthDigit + '0';
    
    //printing number and ASCII value
    printf("First digit = %d\nFirst digit ASCII = %d\n", firstDigit, firstDigitchar);
    printf("Second digit = %d\nSecond digit ASCII = %d\n", secondDigit, secondDigitchar);
    printf("Third digit = %d\nThird digit ASCII = %d\n", thirdDigit, thirdDigitchar);
    printf("Fourth digit = %d\nFourth digit ASCII = %d\n", fourthDigit, fourthDigitchar);

    return 0;
}