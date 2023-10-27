#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 6 denominations of notes ie. rs 1, rs 2, rs 5, rs 10, rs 50, rs 100
    // 163

    int userAmnt;

    // print("Please enter amount: ")
    printf("Please enter amount: ");
    scanf("%d", &userAmnt);

    int d100 = userAmnt / 100;
    int r100 = userAmnt % 100;
    int d50 = r100 / 50;
    int r50 = r100 % 50;
    int d10 = r50 / 10;
    int r10 = r50 % 10;
    int d5 = r10 / 5;
    int r5 = r10 % 5;
    int d2 = r5 / 2;
    int r2 = r5 % 2;
    int d1 = r2 / 1;
    int r1 = r2 % 1;

    int denominationsTotal = d100 + d50 + d10 + d5 + d2 + d1;

    printf("Minimum Number of denominations are: %d\n", denominationsTotal);

    
    return 0;
}
