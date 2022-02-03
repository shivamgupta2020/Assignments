#include <stdio.h>

int main()
{
    //declaring variables
    float s1, s2, s3;

    //input sides of the triangle
    printf("Enter sides of triangle = \n");
    scanf("%f%f%f", &s1, &s2, &s3);

    // checking whether these ss form triangle or not
    (s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1) ? printf("These ss can form a triangle") : printf("These ss can't form a triangle");

    return 0;
}