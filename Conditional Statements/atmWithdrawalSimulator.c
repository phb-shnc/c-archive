//* ATM Withdrawal Simulator

#include <stdbool.h>
#include <stdio.h>

int main() {

    float balance;
    float withdrawAmount;
    const float MIN_BALANCE = 500;
    bool sufficientFunds;

    printf("Enter your balance: ");
    scanf("%f", &balance);
    printf("Enter your withdraw amount: ");
    scanf("%f", &withdrawAmount);

    float availableBalance = balance - withdrawAmount;

    if (availableBalance >= 0) {

        if (availableBalance >= MIN_BALANCE) {
            printf("Your withdrawal has been approved.\n");
            sufficientFunds = true;
        } else {
            printf("Warning: Your balance is below the limit for account activation.\n");
            sufficientFunds = true;
        }
        
    } else {
        printf("Your withdrawal has been denied.\n");
        sufficientFunds = false;
    }

    if (sufficientFunds) {
        printf("Your account is debited for INR %.2f.\nAvailable balance: INR %.2f.\n", withdrawAmount, availableBalance);
    } else {
        printf("Sorry, transaction cannot be processed. Please try again.\n");
    }

    return 0;
}