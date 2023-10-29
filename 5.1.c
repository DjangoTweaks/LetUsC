#include <stdio.h>

// Write a program to calculate the overtime pay of 10 employees. Overtime is paid at the rate of 120rs per hour for every hour worked above 40 hours.
// Assume that employees do not work for fractional part of an hour.

int main(int argc, char const *argv[])
{
    int hoursWorked, overtimePay, overtimeHours;
    int numOfEmployees=0;

    while (numOfEmployees++<10)
    {
        printf("For Employee: %d\n", numOfEmployees);

        printf("Please enter number of hours worked: ");
        scanf("%d", &hoursWorked);

        if (hoursWorked > 40)
        {
            overtimeHours = hoursWorked - 40;
            overtimePay = overtimeHours * 120;
            printf("\nUser has worked %d more hours and should be rewarded %d rs more pay.\n\n", overtimeHours, overtimePay);
        }
        else
        {
            printf("Employee has not worked overtime.\n\n");
        }
    }

    return 0;
}
