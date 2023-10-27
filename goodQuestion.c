// can I do int a = b = c = d = 10;???

#include <stdio.h> // #include is a preprocessor directive 

int main(int argc, char const *argv[])
{
    // int a = b = c = d = 10; this will not work because b,c, and d are not defined yet before moving on to assigning the variable.

    // what would work is
    int a = 10;
    int b = 10;

    int d = 10;
    float aFloat=28.2;
    float bFloat=10.4;
    int c= (int)aFloat; //float cannot be used as a variable to operate modulus in c, therefore we have to typecast into int to use modulus operator
    int j= (int)bFloat;

    

    printf("\n\nAfter Typecasting aFloat to c: %d\n", c);
    printf("After Typecasting bFloat to j: %d\n\n", j);
    int m=c%j;
    printf("Modulus of c and j: %d\n\n",m);

    printf("%d, %d, %d", 5%-2, 5/2, -5%2); 


    return 0;
}
