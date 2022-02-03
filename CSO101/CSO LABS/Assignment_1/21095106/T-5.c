#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter number 1 = ");
    scanf("%d", &a);
    printf("Enter number 2 = ");
    scanf("%d", &b);
    printf("You entered \na = %d\nb = %d\n", a,b);
    t=a;
    a=b;
    b=t;

    printf("After swap \na = %d\nb = %d\n ", a,b);
    
    return 0;
}