/*
    * Multiple Orders
        * Uses an array structure to store orders
        * Asks user to enter 5 orders
        * Displays the orders
        * Calculates the grand total
*/

#include <stdio.h>

struct Order {
    int orderID;
    char itemName[50];
    int quantity;
    float price;
};

int main() {
    struct Order o[5];

    float total = 0.0;
    float grandTotal = 0.0;

    printf("Multiple Orders (Array of Structures)\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Order %d\n", i + 1);

        printf("Order ID: ");
        scanf("%d", &o[i].orderID);

        printf("Item Name: ");
        scanf(" %[^\n]%*c", &o[i].itemName);

        printf("Quantity: ");
        scanf("%d", &o[i].quantity);

        printf("Price: ");
        scanf("%f", &o[i].price);

        printf("\n");
    }
    
    printf("===== Order Summary =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Order #%d\n", i + 1);
        printf("Order ID: %d\n", o[i].orderID);
        printf("Item: %s\n", o[i].itemName);
        printf("Quantity: %d\n", o[i].quantity);
        printf("Price: %.2f\n", o[i].price);

        total = o[i].price * o[i].quantity;
        printf("Total: %.2f\n\n", total);
        grandTotal += total;
    }

    printf("----------------------------\n");
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}