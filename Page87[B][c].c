#include <stdio.h>

//write a program for a matchstick game being played between the computer and user. 
//Your program should ensure that the computer always wins. 
//Rules of the game are as follows: 
//1. there are 21 match sticks
//2. the computer asks the player to pick 1,2,3, or 4 matchsticks
//3. after the person picks, the computer does the picking
//4. whoever is forced to pick up the last matchstick loses the game.

int main(int argc, char const *argv[])
{
    int matchSticks=21;
    int userChoice;
    int a = 0;
    while(matchSticks!=0)
    {
    
    printf("\n%d number of match sticks are left.\n", matchSticks);    
    printf("Please pick a match stick, your options are 1, 2, 3, or 4: ");
    scanf("%d", &userChoice);

     if(userChoice>4 || userChoice<1) continue;

   // Work in Progress

    }
   




    return 0;
}
