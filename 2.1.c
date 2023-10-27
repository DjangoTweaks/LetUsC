
// if the lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int side1, side2, side3;
    float s, areaTriangle;
    float heronStep1, heronStep2;

    // Heron's Formula

    printf("Please Input Side 1: \n");
    scanf("%d", &side1);
    printf("Please Enter Side 2: \n");
    scanf("%d", &side2);
    printf("Please Enter Side 3: \n");
    scanf("%d", &side3);

    s = (side1 + side2 + side3) / 2;

    heronStep1 = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    printf("%f", heronStep1);

    return 0;
}
