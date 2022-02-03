#include <stdio.h>
#include<math.h>

int main()
{
    //declaring operator variable
    int operator;

    //declaring number variable
    float num1, num2;

    //input operator variable
    printf("Welcome to simple calculator.\nOperation code:\nAdditon = 1\nMultiplication = 2\nSubtraction = 3\nDivision = 4\npower to(a^b) = 5\nsquareroot = 6\n");
    scanf("%d", &operator);

    if (operator == 6)
    {
        printf("You selected Square root operation\n");
        printf("Enter your number = ");
        scanf("%f", &num1);

        printf("Square Root of %f = %.2lf", num1, sqrt(num1));
        return 0;
    }

    //input number 1
    printf("Enter a = ");
    scanf("%f", &num1);

    //input number 2
    printf("Enter b = ");
    scanf("%f", &num2);

    //using switch case for operation
    switch (operator)
    {
    case 1:
        printf("You selected Additon operation\n");
        printf("a+b = %.2f", num1 + num2);
        break;
    case 2:
        printf("You selected Multiplication operation\n");
        printf("a*b = %.2f", num1 * num2);
        break;        
    case 3:
        printf("You selected Subtraction operation\n");
        printf("a-b = %.2f", num1 - num2);
        break;
    case 4:
        printf("You selected Division operation\n");
        printf("a/b = %.2f", num1 / num2);
        break;
    case 5:
        printf("You selected Powerto operation\n");
        printf("a^b = %.2lf", pow(num1,num2));
        break;    

    default:
        printf("Operation can't be done\n");
    }
    
    return 0;
}