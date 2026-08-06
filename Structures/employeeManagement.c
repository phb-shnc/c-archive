/*
    * Employee Management System
        * Uses an array structure to store employee information
        * Displays all employee information
        * Displays employee with the highest salary
        * Calculates the total and average salary
        * Determines the employee whose salary is greater than the average salary
*/

#include <stdio.h>

struct Employee {
    char empName[50];
    int empID;
    float hrsWorked;
    float hrlyRate;
    float salary;
};

void inputEmpDetails(struct Employee e[], int SIZE);
void displayEmpRecords(struct Employee e[], int SIZE);
void highestSalary(struct Employee e[], int SIZE);
void totalPayroll(struct Employee e[], int SIZE);

int main() {
    int const SIZE = 2;

    struct Employee e[SIZE];

    inputEmpDetails(e, SIZE);
    displayEmpRecords(e, SIZE);
    highestSalary(e, SIZE);
    totalPayroll(e, SIZE);

    return 0;
}

void inputEmpDetails(struct Employee e[], int SIZE) {
    printf("Input Employee Details:\n\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Employee %d: \n", i + 1);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]%*c", &e[i].empName);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].empID);

        printf("Enter Hours Worked: ");
        scanf("%f", &e[i].hrsWorked);

        printf("Enter Hourly Rate: ");
        scanf("%f", &e[i].hrlyRate);

        printf("\n");

        e[i].salary = e[i].hrsWorked * e[i].hrlyRate;
    }
}

void displayEmpRecords(struct Employee e[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        printf("Employee Name: %s\n", e[i].empName);
        printf("Employee ID: %d\n", e[i].empID);
        printf("Hours Worked: %.2f\n", e[i].hrsWorked);
        printf("Hourly Rate: %.2f\n", e[i].hrlyRate);
        printf("Salary: %.2f\n\n", e[i].salary);
    }
}

void highestSalary(struct Employee e[], int SIZE) {
    int highestIndex = 0;
    float highestSalary = e[0].salary;
    for (int i = 1; i < SIZE; i++) {
        if (e[i].salary > highestSalary) {
            highestSalary = e[i].salary;
            highestIndex = i;
        }
    }
    printf("Employee with Highest Salary: %s - %.2f\n\n",
            e[highestIndex].empName, highestSalary);
}

void totalPayroll(struct Employee e[], int SIZE) {
    float total = 0.0;
    float average = 0.0;
    for (int i = 0; i < SIZE; i++) {
        total += e[i].salary;
        average = total / SIZE;
    }
    printf("Total Payroll Expense: %.2f\n", total);
    printf("Average Salary: %.2f\n", average);

    for (int i = 0; i < SIZE; i++) {
        if (e[i].salary > average) {
            printf("Employee whose salary is greater than the average salary:\n");
            printf("\tEmployee %d: %s\n", i + 1, e[i].empName);
        }
    }

}