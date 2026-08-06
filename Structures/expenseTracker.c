/*
    * Expense Tracker
        * Uses an arraay structure to store expenses
        * Displays expenses
        * Calculates the total expenses
        * Asks user which category to compute total for
        * Fiters by category or date and displays the filtered expenses
        * Can update expense amount by record number
*/

#include <stdio.h>
#include <string.h>

struct Expense {
    char date[50];
    char category[50];
    float amount;
};

void addExpenses(struct Expense e[], int n);
void displayExpenses(struct Expense *e, int n);
void computeExpenses(struct Expense e[], int n);
void computePerCategory(struct Expense e[], int n);
void filterExpenses(struct Expense e[], int n);
void updateExpenses(struct Expense *e, int n);

int main() {

    int n;
    printf("Enter number of expenses: ");
    scanf("%d", &n);

    struct Expense e[n];

    addExpenses(e, n);
    displayExpenses(e, n);
    computeExpenses(e, n);
    computePerCategory(e, n);
    filterExpenses(e, n);
    updateExpenses(e, n);

    return 0;
}

void addExpenses(struct Expense e[], int n) {

    for (int i = 0; i < n; i++) {
        printf("\n=== Expense %d ===\n", i + 1);
        printf("Enter Date (YYYY-MM-DD): ");
        scanf(" %[^\n]%*c", e[i].date);
        printf("Enter Category: ");
        scanf(" %[^\n]%*c", e[i].category);
        printf("Enter Amount: ");
        scanf("%f", &e[i].amount);
    }
}

void displayExpenses(struct Expense *e, int n) {

    printf("\n===== EXPENSE LIST =====\n\n");
    for (int i = 0; i < n; i++) {
        printf("Expense #%d\n", i + 1);
        printf("Date     : %s\n", (e+i)->date);
        printf("Category : %s\n", (e+i)->category);
        printf("Amount   : %.2f\n\n", (e+i)->amount);
    }
}

void computeExpenses(struct Expense e[], int n) {
    
    float total = 0.0;
    for (int i = 0; i < n; i++) {
        total += e[i].amount;
    }
    printf("Total Expenses: %.2f\n\n", total);
}

void computePerCategory(struct Expense e[], int n) {

    char category2[50];
    float categoryTotal = 0.0;

    printf("Enter Category to Compute Total: ");
    scanf(" %[^\n]%*c", &category2);

    for (int i = 0; i < n; i++) {
        if (strcmp(e[i].category, category2) == 0) {
            categoryTotal += e[i].amount;
        }
    }
    printf("Total Expenses for %s: %.2f\n", category2, categoryTotal);
}

void filterExpenses(struct Expense e[], int n) {

    char filter[50];
    int choice;

    printf("\nFilter by: 1-Category, 2-Date: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Category to Filter: ");
        scanf(" %[^\n]%*c", filter);

        printf("\n===== FILTERED EXPENSES =====\n\n");
        for (int i = 0; i < n; i++) {
            if (strcmp(e[i].category, filter) == 0) {
                printf("Date     : %s\n", e[i].date);
                printf("Category : %s\n", e[i].category);
                printf("Amount   : %.2f\n\n", e[i].amount);
            }
        }
    } else if (choice == 2) {
        printf("Enter Date to Filter (YYYY-MM-DD): ");
        scanf(" %[^\n]%*c", filter);
        printf("\n===== FILTERED EXPENSES =====\n\n");

        for (int i = 0; i < n; i++) {
            if (strcmp(e[i].date, filter) == 0) {
                printf("Date     : %s\n", e[i].date);
                printf("Category : %s\n", e[i].category);
                printf("Amount   : %.2f\n\n", e[i].amount);
            }
        }
    } else {
        printf("Invalid Choice!\n");
    }
}

void updateExpenses(struct Expense *e, int n) {

    int record;
    float newAmount;

    printf("Enter Expense Record Number to Update: ");
    scanf("%d", &record);

    if (record < 1 || record > n) {
        printf("Invalid record number!\n");
        return;
    }

    printf("Enter New Amount: ");
    scanf("%f", &newAmount);

    (e + record - 1)->amount = newAmount;
    printf("\nExpense updated successfully!\n");

    printf("\n===== UPDATED EXPENSES =====\n");

    displayExpenses(e, n);
}