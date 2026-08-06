//* Meal Price Checker based on Membership Status

#include <stdio.h>

int main() {

    int meal, membershipStatus;
    float finalPrice, mealPrice;

    printf("Choose your meal (1 - Burger, 2 - Chicken, 3 - Pasta): ");
    scanf("%d", &meal);

    if (meal == 1) {
        mealPrice = 150;
    } else if (meal == 2) {
        mealPrice = 200;
    } else if (meal == 3) {
        mealPrice = 250;
    } else {
        printf("\nInvalid meal choice. Please input only 1, 2, or 3.\n");
        return 1;
    }

    printf("Enter your membership status (1 - Regular, 2 - Premium): ");
    scanf("%d", &membershipStatus);

    if (membershipStatus == 1) {
        finalPrice = mealPrice;
    } else if (membershipStatus == 2) {
        finalPrice = mealPrice - (mealPrice * 0.10);
    } else {
        printf("\nInvalid membership status. Please input only 1 or 2.\n");
        return 1;
    }

    printf("\nYour final meal cost is: %.2f pesos\n", finalPrice);

    return 0;
}