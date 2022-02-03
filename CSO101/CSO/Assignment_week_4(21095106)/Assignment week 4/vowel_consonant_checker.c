#include <stdio.h>

int main()
{  
    //declaring variable
    char a;

    //input letter
    printf("Enter a letter = \n");
    scanf("%c", &a);

    //using terniary operator for finding vowel and consonant
    a == 'a' | a == 'e' | a == 'i' | a == 'o' | a == 'u' | a == 'A' | a == 'E' | a == 'I' | a == 'O' | a == 'U' ? printf("%c is a vowel", a) : printf("%c is a consonant", a);
    return 0;
}