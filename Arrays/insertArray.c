//* Inserting an Element into an Array

#include <stdio.h>

int main() {

    int array[10];
    int n;

    do {
        printf("Enter number of elements (1-10): ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Invalid size. Please try again.\n");
        }
    } while (n < 1 || n > 10);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int value;
    int position;

    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position.\n\n");
    } else if (n == 10) {
        printf("Array is full.\n");
    } else {
        for (int i = n; i > position; i--) {
            array[i] = array[i - 1];
        }

        array[position] = value;
        n++;

        printf("Updated array: ");

        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}