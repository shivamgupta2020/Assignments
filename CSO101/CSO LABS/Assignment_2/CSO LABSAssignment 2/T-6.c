#include <stdio.h>
//include library for boolean data type
#include <stdbool.h>

int main()
{
    //declaring variable
    int a;
    float b;
    char c;
    double d;
    long int e;
    long double f;

    //printing size of different data types
    printf("size of char data types is = %d bits\n", sizeof(c));
    printf("size of bool data types is = %d bits\n", sizeof(bool));
    printf("size of int data types is = %d bits\n", sizeof(a));
    printf("size of float data types is = %d bits \n", sizeof(b));
    printf("size of double data types is = %d bits\n", sizeof(d));
    printf("size of long int data types is = %d bits\n", sizeof(e));
    printf("size of long double data types is = %d bits\n", sizeof(f));

    return 0;
}