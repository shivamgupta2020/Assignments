// Submitted by:-
// Name: Shivam Gupta
// Roll no.: 21095106
// Dept: Electronics Engineering (B.Tech 1st year)
// Email: shivam.gupta.ece21@itbhu.ac.in

#include <stdio.h>
int main()
{
    // declaring variable
    int a;

    // input a
    printf("Enter number = ");
    scanf("%d", &a);

    // output multiplication table
    printf("Multiplication table of %d\n", a);
    printf("%d x 1 = %d\n", a, a);
    printf("%d x 2 = %d\n", a, a * 2);
    printf("%d x 3 = %d\n", a, a * 3);
    printf("%d x 4 = %d\n", a, a * 4);
    printf("%d x 5 = %d\n", a, a * 5);
    printf("%d x 6 = %d\n", a, a * 6);
    printf("%d x 7 = %d\n", a, a * 7);
    printf("%d x 8 = %d\n", a, a * 8);
    printf("%d x 9 = %d\n", a, a * 9);
    printf("%d x 10 = %d\n", a, a * 10);

    return 0;
}