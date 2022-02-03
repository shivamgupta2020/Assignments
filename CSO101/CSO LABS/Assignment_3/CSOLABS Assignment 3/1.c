#include <stdio.h>

int main()
{
    //declaring operator variable
    char operator;

    //input operator variable
    printf("Enter operation (+ - * /) = ");
    scanf("%c", &operator);

    //declaring number variable
    float num1, num2;

    //input number 1
    printf("Enter number 1 = ");
    scanf("%f", &num1);

    //input number 2
    printf("Enter number 2 = ");
    scanf("%f", &num2);

    //using switch case for operation
    switch (operator)
    {
    case '+':
        printf("a+b = %f", num1 + num2);
        break;
    case '-':
        printf("a-b = %f", num1 - num2);
        break;
    case '*':
        printf("a*b = %f", num1 * num2);
        break;
    case '/':
        printf("a/b = %f", num1 / num2);
        break;

    default:
        printf("Operation can't be done ");
    }
    
    return 0;
}