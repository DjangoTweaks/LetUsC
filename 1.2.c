#include <stdio.h>


int main(int argc, char const *argv[])
{
    float kilometersDist; //type declaration instruction (used to declare types of variables in c)


    printf("Please enter the distance between city A and city B (in km):");
    scanf("%f", &kilometersDist);
    
    float inMeters= kilometersDist*1000; //Arithmetic Instruction; uses variables to perform arithmetic operations using operators
    float inFeet=kilometersDist*3281;
    float inInches=kilometersDist*3281*12;
    float inCentimeters=inMeters*100;

    printf("The Converted Distance Will Be:\nin meters:%f\nin Feet:%f\nin Inches:%f\nin Centimeters:%f", inMeters,inFeet,inInches,inCentimeters);
    
    return 0;
}
