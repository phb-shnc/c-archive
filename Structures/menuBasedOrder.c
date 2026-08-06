/*
    * Menu-Based Ordering
        * Displays the menu
        * Asks user to enter food order
        * Uses switch case for food choice
        * Uses a structure to store food order
        * Prints the receipt
*/

#include <stdio.h>
#include <string.h>

struct Order {
    int orderID;
    char itemName[50];
    int quantity;
    float price;
};

int main() {
    struct Order o;

    int choice;
    float total = 0.0;

    printf("Menu-Based Ordering\n\n");

    printf("====== MENU ======\n");
    printf("1. Burger - 50\n");
    printf("2. Fries - 30\n");
    printf("3. Drinks - 20\n");
    printf("==================\n\n");

    printf("Enter Order ID: ");
    scanf("%d", &o.orderID);

    printf("Enter Choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter Quantity: ");
    scanf("%d", &o.quantity);

    printf("\n\n");

    switch (choice) {
        case 1:
            strcpy(o.itemName, "Burger");
            o.price = 50;
            break;
        case 2:
            strcpy(o.itemName, "Fries");
            o.price = 30;
            break;
        case 3:
            strcpy(o.itemName, "Drinks");
            o.price = 20;
            break;
    }

    printf("====== RECEIPT ======\n");
    printf("Order ID: %d\n", o.orderID);
    printf("Item: %s\n", o.itemName);
    printf("Quantity: %d\n", o.quantity);
    printf("Price: %.2f\n", o.price);
    printf("Total: %.2f\n", o.price * o.quantity);
    printf("=====================\n");

    return 0;
}