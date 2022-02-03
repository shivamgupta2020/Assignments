#include <stdio.h>

int main()
{
    char choice;

    printf("Do you enjoy coding?\nEnter your choice (Y/N)=  ");
    choice = getchar();

    choice == 'Y' | choice == 'y' ? printf("You selected yes.") : choice == 'N' | choice == 'n' ? printf("You selected no.") : printf("Invalid choice");

    return 0;
}