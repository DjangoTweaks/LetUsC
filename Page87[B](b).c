#include <stdio.h>
// Write a program to print out all armstrong numbers between 1 and 500.
int main(int argc, char const *argv[])
{
    int i = 1;

    while (i < 500)
    {
        int armstrongNumCalc=i;
        int sum=0; //initialize sum to 0 because we want a clean sum 

        while (armstrongNumCalc>0)
        {
            int a = armstrongNumCalc % 10;
            sum = sum + (a * a * a);
            armstrongNumCalc=armstrongNumCalc / 10;  //when this gives 0, the loop nested while loop will exit
        }

        if (i == sum)
        {
            printf("%d is a armstrong number.\n", i);
        }

        i++;
    }
    return 0;
}
