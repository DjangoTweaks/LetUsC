#include <stdio.h>


int main(int argc, char const *argv[])
{
    int i = 0;

    while(++i<=10)  

    // Tricky Question: In the while loop, i gets compared with 10 first, and then is incremented in the format i++
    // People are misguided often as to i being incremented first and then be compared with the number 10. 
    // Similarly, i+=10 is a compound assignment operator, this operator first equates to 10, and then increments in the fashion i++
    // Good Q for interviews 
    
    // while(++i<=10) ==> now instead of i++, if it was ++i, i would have incremented first before checking with 10. 
    // In this scenario, the output would have been 1 through 10  
    // ++i is called the post incrementation operator. 


    {
        printf("%d\n", i);
    }

    return 0;
}

