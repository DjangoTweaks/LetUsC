#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;

    printf("Subject 1: ");
    scanf("%f", &sub1);
    printf("Subject 2: ");
    scanf("%f", &sub2);
    printf("Subject 3: ");
    scanf("%f", &sub3);
    printf("Subject 4: ");
    scanf("%f", &sub4);
    printf("Subject 5: ");
    scanf("%f", &sub5);

    float div= ((sub1+sub2+sub3+sub4+sub5)/500.00)*100; //Assuming each exam is out of 100, total would be 500 as a percentage
  //   printf("Percentage is: %f ", div);
     
    if(div>=60)
    {
            printf("First Division");
    } 
    if(div<=59 && div>=50)
    {
        printf("Second Division");
    }
    if(div>=40 && div <=49)
    {
     printf("Third Division");
    }
    if(div<40)
    {
        printf("Fail");
    }

    return 0;
}

