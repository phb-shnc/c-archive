//* Using a for loop to ask the user the item prices and compute the total amount

#include <stdio.h>

int main() {

    int items;
    float price[100];
    float total = 0.0f;

    printf("Enter number of items: ");
    scanf("%d", &items);

    for (int i = 0; i < items; i++) {
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &price[i]);

        total += price[i];
    }

    printf("Total amount: %.2f", total);

    return 0;
}