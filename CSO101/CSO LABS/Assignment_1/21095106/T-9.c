#include<stdio.h>
int main()
{
    double a,b,t;
    printf("Enter a = ");
    scanf("%lf", &a);
    printf("Enter b = ");
    scanf("%lf", &b);
    printf("You entered \na = %lf\nb = %lf\n", a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swap \na = %lf\nb = %lf\n ", a,b);
    
    return 0;
}