#include <stdio.h>

int main(int argc, char const *argv[])
{
    float rameshSalary;

    printf("Please Enter Ramesh's Salary: ");   //          printf("");
    scanf("%f", &rameshSalary);

    float dearnessAllowance = 0.4 * rameshSalary;
    float houseRentAllowance = 0.2 * rameshSalary;
    float grossSalary = rameshSalary + dearnessAllowance + houseRentAllowance;

    printf("If Ramesh's Salary is %f, his dearness allowance is %f, and his HRA is %f, then his gross salary will be %f", rameshSalary, dearnessAllowance, houseRentAllowance, grossSalary);

    return 0;
}
