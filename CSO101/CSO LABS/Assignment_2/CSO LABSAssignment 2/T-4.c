#include<stdio.h>

int main()
{
    //declaring variable
    float a,b;

    //input length and width of rectangle
    printf("Enter length of rectangle = ");
    scanf("%f", &a);
    printf("Enter width of rectangle = ");
    scanf("%f", &b);

    //printing area and perimeter of rectangle
    printf("Area of the rectangle = %0.2f\n", a*b);
    printf("Perimeter of the rectangle = %0.2f\n", (a+b)*2);   
    
    return 0;

}