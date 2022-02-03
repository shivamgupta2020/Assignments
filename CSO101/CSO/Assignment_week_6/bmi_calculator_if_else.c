#include<stdio.h>
void main()
{
    float bmi,height,weight;
    printf("Enter your height(in meter) = ");;
    scanf("%f", &height);
    printf("Enter your weight(in kg) = ");;
    scanf("%f", &weight);

    bmi = weight/(height*height);

    if(bmi<18.5)
    {
        printf("Underweight for BMI");
    }
    else if(bmi>18.5 && bmi<24.9)
    {
        printf("Normal weight for BMI");
    }
    else if(bmi>25 && bmi<29.9)
    {
        printf("Overweight for BMI");
    }
    else
    {
        printf("Obesity for BMI");
    }
    

}