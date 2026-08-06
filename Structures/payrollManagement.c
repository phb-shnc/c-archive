/*
    * Employee Payroll Management
        * Uses an array structure to employee information
        * Displays the employee list
        * Allows user to update employee salary using employee ID
        * Displays the updated employee records
*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int empID;
    char name[50];
    char dept[50];
    float salary;
};

void inputEmployee(struct Employee emp[], int n);
void displayEmployees(struct Employee emp[], int n);
void updateSalary(struct Employee emp[], int n);

int main() {
    
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    inputEmployee(emp, n);
    printf("\n===== EMPLOYEE LIST =====\n");
    displayEmployees(emp, n);

    updateSalary(emp, n);
    printf("\n===== UPDATE EMPLOYEE RECORDS =====\n");
    displayEmployees(emp, n);

    return 0;
}

void inputEmployee(struct Employee emp[], int n) {

    for (int i = 0; i < n; i++) {
        printf("\n=== Employee %d ===\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empID);

        printf("Enter Name: ");
        scanf(" %[^\n]%*c", &emp[i].name);

        printf("Enter Department: ");
        scanf(" %[^\n]%*c", &emp[i].dept);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void displayEmployees(struct Employee emp[], int n) {

    for (int i = 0; i < n; i++) {
        printf("Employee ID : %d\n", emp[i].empID);
        printf("Name        : %s\n", emp[i].name);
        printf("Department  : %s\n", emp[i].dept);
        printf("Salary      : %.2f\n\n", emp[i].salary);
    }
}

void updateSalary(struct Employee emp[], int n) {

    int id;
    float newSalary;
    int found = 0;

    printf("Enter Employee ID to update salary: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (emp[i].empID == id) {
            printf("Enter New Salary: ");
            scanf("%f", &newSalary);
            emp[i].salary = newSalary;
            printf("Salary updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee ID not found!\n");
    }
}