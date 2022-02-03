#include <stdio.h>
#include <math.h>

int main()
{
    //declaring choice variable
    int choice;

    //input choice
    printf("Enter choice(1/2) = ");
    scanf("%d", &choice);

    //declaring number variable
    float num;

    //input number
    printf("Enter number = ");
    scanf("%f", &num);

    // performing operation
    switch (choice)
    {
    case 1:
        printf("%f sine ", sin(num));
        break;
    case 2:
        printf("%f cosine", cos(num));
        break;

    default:
        printf("%f tan", tan(num));
        break;
    }
    return 0;
}