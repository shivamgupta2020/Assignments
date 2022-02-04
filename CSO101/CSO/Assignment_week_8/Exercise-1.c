// Name - Shivam Gupta
// Roll No. - 21095106
// Branch - ECE(1st year)
// Email - shivam.gupta.ece21@itbhu.ac.in


#include <stdio.h>
#include <time.h>
int main()
{
    printf("\n");
    int arr[10];
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
        printf("%d  ", arr[i]);
    }
    printf("\n");
    printf("\n");
    
    int max = arr[0];
    int maxlocation = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxlocation = i;
        }
    }
    printf("Largest number of the array = %d\nLocation of largest number in array = %d\n", max, maxlocation);

    int min = arr[0];
    int minlocation = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minlocation = i;
        }
    }
    printf("Smallest of the array = %d\nLocation of smallest number in array = %d", min, minlocation);

    return 0;
}
