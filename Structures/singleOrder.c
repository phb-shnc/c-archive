/*
    * Single Order
        * Uses a structure to store an order
        * Displays the order summary and calculates the total
*/

#include <stdio.h>

struct Order {
    int orderID;
    char itemName[50];
    int quantity;
    float price;
};

int main() {
    struct Order o;

    float total = 0.0;

    printf("Single Order (Structure)\n\n");

    printf("Enter Order ID: ");
    scanf("%d", &o.orderID);

    printf("Enter Item Name: ");
    scanf(" %[^\n]%*c", &o.itemName);

    printf("Enter Quantity: ");
    scanf("%d", &o.quantity);

    printf("Enter Price: ");
    scanf("%f", &o.price);

    printf("\nOrder Summary\n");
    printf("-------------------\n");

    printf("Order ID: %d\n", o.orderID);
    printf("Item: %s\n", o.itemName);
    printf("Quantity: %d\n", o.quantity);
    printf("Price: %.2f\n", o.price);

    total = o.price * o.quantity;

    printf("Total: %.2f", total);

    return 0;
}