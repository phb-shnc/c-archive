//* Loan Eligibility Checker

#include <stdio.h>

int main() {

    float monthlyIncome;
    int age;
    float loanAmount;

    printf("Enter Monthly Income: ");
    scanf("%f", &monthlyIncome);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Desired Loan Amount: ");
    scanf("%f", &loanAmount);

    if ((monthlyIncome >= 15000) && (age >= 18 && age <= 65) && (loanAmount <= monthlyIncome * 10)) {
        printf("Congratulations! You are eligible for the loan.\n");
    } else {
        printf("Sorry, you do not meet the loan eligibility requirements.\n");
    }

    return 0;
}