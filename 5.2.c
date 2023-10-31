// write a program to find the factorial value of any number entered through the keyboard.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int fact;

    printf("Enter any number: ");
    scanf("%d", &num);

    // factorial algorithm
    int count = fact = 1;

    while (count <= num)
    {
        fact = fact*count;
        count++;

    }

    printf("%d", fact);

    return 0;
}
