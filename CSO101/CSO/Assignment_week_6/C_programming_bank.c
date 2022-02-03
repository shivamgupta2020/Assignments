#include <stdio.h>
void main()
{
    char gender;
    int age;
    float balance, bonus;

    printf("Enter your balance = ");
    scanf("%f", &balance);
    printf("Enter your age(in years) = ");
    scanf("%d", &age);
    printf("Enter your gender(M/F) = ");
    scanf(" %c", &gender);

    if (age >= 60)
    {
        if (balance > 50000)
        {
            bonus = balance * 0.1;
            printf("You got %.2f as for bonus ", bonus);
        }
        else
        {
            bonus = balance * 0.08;
            printf("You got %.2f as for bonus ", bonus);
        }
    }
    else
    {
        if (balance > 10000 && gender == 'F')
        {
            bonus = balance * 0.05;
            printf("You got %.2f as for bonus ", bonus);
        }
        else
        {
            bonus = balance * 0.02;
            printf("You got %.2f as for bonus ", bonus);
        }
    }
}