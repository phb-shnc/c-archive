/*
    * Employee Payroll
        * Uses a structure to store employee information
        * Displays employee information
        * Asks user to update and enter new salary
        * Displays the updated employee information
*/

#include <stdio.h>

struct Employee {
    int empID;
    char name[50];
    char dept[50];
    float salary;
};

struct Employee inputEmployee();
void updateSalary(struct Employee *emp);
void displayEmployeeInfo(struct Employee emp);

int main() {

    struct Employee emp;

    emp = inputEmployee();
    updateSalary(&emp);
    displayEmployeeInfo(emp);

    return 0;
}

struct Employee inputEmployee() {

    struct Employee emp;
    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]%*c", &emp.name);

    printf("Enter Department: ");
    scanf(" %[^\n]%*c", &emp.dept);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    return emp;
}

void updateSalary(struct Employee *emp) {

    printf("\nBefore Salary Update:\n");
    printf("Salary: %.2f\n", emp->salary);

    printf("Enter New Salary: ");
    scanf("%f", &emp->salary);
}

void displayEmployeeInfo(struct Employee emp) {

    printf("\n=== Employee Information ===\n");
    printf("Employee ID: %d\n", emp.empID);
    printf("Name: %s\n", emp.name);
    printf("Department: %s\n", emp.dept);
    printf("Salary: %.2f\n", emp.salary);
}