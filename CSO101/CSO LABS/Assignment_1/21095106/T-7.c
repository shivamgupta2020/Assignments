#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    long int e;
    long double f;
     printf("size of char variable is = %d bits\n", sizeof(c));
    printf("size of int variable is = %d bits\n", sizeof(a));
    printf("size of float variable is = %d bits \n", sizeof(b));
    printf("size of double variable is = %d bits\n", sizeof(d));
    printf("size of long int variable is = %d bits\n", sizeof(e));
    printf("size of long double variable is = %d bits\n", sizeof(f));

    return 0;
}