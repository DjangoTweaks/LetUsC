#include <stdio.h>
//write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255

int main(int argc, char const *argv[])
{
    int i = 0;

    while(i<=255)
    {
        printf("for integer %d, the corresponding ASCII value is: %c\n", i, i);
        i++;

    }
    
    return 0;
}
