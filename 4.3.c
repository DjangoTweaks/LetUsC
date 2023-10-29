#include <stdio.h>





int main(int argc, char const *argv[])
{
    int side1,side2,side3,largestside;

    printf("Please enter 3 sides of a keyboard: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    //triangle is valid if the sum of 2 sides is greater than the largest of the three sides 
  
  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("Valid Triangle.\n");
    } else {
        printf("Not a valid triangle.\n");
    }

    


    return 0;
}
