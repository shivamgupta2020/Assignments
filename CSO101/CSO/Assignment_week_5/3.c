#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float f;
    char c;
    double d;

    printf("Enter integer : ");
    scanf("%d",&i);

    printf("Enter character : ");
    scanf(" %c",&c);

    printf("Enter float : ");
    scanf("%f",&f);

    printf("Enter double : ");
    scanf("%lf",&d);

    printf("Integer is : %f\n",i);
    printf("Character is : %f\n",c);
    printf("Float is : %f\n",f);
    printf("Double is : %f",d);

    return 0;
}