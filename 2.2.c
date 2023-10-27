// if a five digit number is input through the keyboard, write a program to reverse it

#include <stdio.h>

// suppose we take number 42287

int main(int argc, char const *argv[])
{
    int n, d5, d4, d3, d2, d1;

    printf("Please enter a number: ");
    scanf("%d", &n);
    d5 = n % 10; //remainder will be 7
    printf("%d\n", d5);
    n = n / 10;
    d4 = n % 10;
    printf("%d\n", d4);
    n = n / 10;
    d3 = n % 10;
    printf("%d\n", d3);
    n = n / 10;
    d2 = n % 10;
    printf("%d\n", d2);
    n = n / 10;
    d1 = n % 10;
    printf("%d\n", d1);

    printf("Therefore Reversed Number is: %d%d%d%d%d", d5, d4, d3, d2, d1);

    return 0;
}
