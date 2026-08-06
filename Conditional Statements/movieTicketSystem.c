//* Movie Ticket System

#include <stdio.h>

int main() {

    int age;
    float price;
    const float basePrice = 250;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 3 && age > 0) {
        printf("Age Category: Infant\n");
        price = basePrice - 250;
    } else if (age >= 3 && age <= 15) {
        printf("Age Category: Child\n");
        price = basePrice;
    } else if (age >= 16 && age <= 59) {
        printf("Age Category: Adult\n");
        price = basePrice + 100;
    } else if (age >= 60) {
        printf("Age Category: Senior\n");
        price = basePrice;
    } else {
        printf("Invalid Age. Please Try Again.\n");
    }

    (price == 0 && age > 0) ? printf("Free Ticket: 0.00 pesos\n") : (price > 0) ? printf("Paid Ticket: %.2f", price) : (age <= 0) ? printf("") : printf("");

    return 0;
}