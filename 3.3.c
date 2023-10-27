//any year is input through the ekeyboard. Write a program to determine whether it is a leap year or not.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    printf("Please Enter a year to determine if it is a leap year or not: ");
    scanf("%d", &year);

    if (year%4==0)
    {
        printf("The year %d is a leap year.", year);

    }
    else
    {
        printf("Year is not a leap year");
    }
    
    return 0;
}
