#include<stdio.h>
int main()
{
    int a,b;
    double c;
    printf("Enter integer 1 = ");
    scanf("%d", &a);
    printf("Enter integer 2 = ");
    scanf("%d", &b);

    c = (double)a/(double)b;

    printf("Quotient of a/b = %lf\n", c);
    printf("Remainder of a/b = %d\n", a%b);    
   
    return 0;
}
