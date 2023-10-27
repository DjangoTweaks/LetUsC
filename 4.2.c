#include <stdio.h>

int main(int argc, char const *argv[])
{
    char marriedQuestion;
    char gender;
    int age;
    printf("Are you married? [y/n]: ");
    scanf(" %c", &marriedQuestion);
    printf("What is your gender? [m/f]: ");
    scanf(" %c", &gender);
    printf("Please Enter Your Age: ");
    scanf("%d", &age);

    if (marriedQuestion=='y')
    {
        printf("Because you are married, you are insured.");
    }
    else if(marriedQuestion=='n' && gender=='m' && age>30)
    {
        printf("You are insured because you are not married, you are male, and your age is above 30");
    }
    else if(marriedQuestion=='n' && gender=='f' && age > 25)
    {
        printf("You are insured because you are not married, you are female, and your age is above 25.");
    }
    else
    {
        printf("Your are not insured.");
    }



    return 0;
}
