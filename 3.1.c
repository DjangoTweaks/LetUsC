#include <stdio.h>


int main(int argc, char const *argv[])
{
    //take cost price and sp as input 
    float cp;
    float sp;
  

    printf("Please enter cost price of product: ");
    scanf("%f", &cp);
    printf("Please enter sale price of product: ");
    scanf("%f", &sp);


    float l= cp-sp; 
    float p= sp-cp;

    if(p>0)
    {
        printf("The seller has made a profit of %f rupees.", p);
    }
    if(l>0)
    {
        printf("The seller has made a loss of %f rupees.", l);
    }
    if(p==0 && l==0)
    {
        printf("The user has made no profit or loss on this item.");
    }
    

    
    return 0;
}
