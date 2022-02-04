// Name - Shivam Gupta
// Roll No. - 21095106
// Branch - ECE(1st year)
// Email - shivam.gupta.ece21@itbhu.ac.in


#include <stdio.h>
#include <time.h>
int main()
{
    printf("\n");
    int arr[3][3];
    srand(time(0));
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = rand() % 2;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    if (arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0)
    {
        printf("0 major array");
    }
    else if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1)
    {
        printf("1 major array");
    }
    else if (arr[2][0] == 1 && arr[1][1] == 1 && arr[0][2] == 1)
    {
        printf("1 minor array");
    }
    else if (arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0)
    {
        printf("0 minor array");
    }
    else
    {
        printf("nothing");
    }
   
    return 0;
}
