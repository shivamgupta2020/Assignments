#include <stdio.h>

int power (int a, int b) {
    if(b) return a * power (a, b-1);
    return a;
}

int main() {
    printf("%d", power (2, 4));
}