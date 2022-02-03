#include <stdio.h>

int main()
{
    // declaring variables
    int a;

    // input marks
    printf("Enter marks = ");
    scanf("%d", &a);

    // finding and printing grades using conditional operator
    a > 50 ? a > 70 ? a > 90 ? a < 100 ? printf("Your grade is A") : printf("Enter invalid marks") : printf("Your grade is B") : printf("Your grade is C") : printf("Your grade is F");

    return 0;
}