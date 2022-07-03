#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a[] = {1,2,3,4,5};
    // printf("%d\t%d", *(a+1)+(*a+1), *(&a[0]+1)+*((a+1)));
    int *b;
    b=a+1;
    printf("%d\t%d", *a, *((b-1)));
    return 0;
}