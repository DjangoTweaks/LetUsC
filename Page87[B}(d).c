#include <stdio.h>

int main() {
    int number, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0)
            positiveCount++;
        else if (number < 0)
            negativeCount++;
        else
            zeroCount++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to consume the newline character

    } while (choice == 'y' || choice == 'Y');

    printf("Count of positive numbers: %d\n", positiveCount);
    printf("Count of negative numbers: %d\n", negativeCount);
    printf("Count of zeros: %d\n", zeroCount);

    return 0;
}