/*
    * Employee Salary
        * Uses an array structure to store employee information
        * Displays employee list
        * Displays the average salary
*/

#include <stdio.h>

struct Employee {
    int empID;
    char name[50];
    int salary;
};

int main() {
    struct Employee e[50];

    int size;
    int sum = 0;
    int average;

    printf("Enter number of employees: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("\nEnter ID: ");
        scanf("%d", &e[i].empID);

        printf("Enter Name: ");
        scanf(" %[^\n]%*c", &e[i].name);

        printf("Enter Salary: ");
        scanf("%d", &e[i].salary);

        sum += e[i].salary;
        average = sum / size;
    }

    printf("\nEmployee List\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d   \n", e[i].empID);
        printf("Name: %s   \n", e[i].name);
        printf("Salary: %d   \n\n", e[i].salary);
    }

    printf("\nAverage Salary: %d\n", average);

    return 0;
}