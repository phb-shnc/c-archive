//* Temperature Converter that asks users which and how many temperature to convert using for loops and if-else

#include <stdio.h>

int main() {
    int choice, n;
    float temp[100], converted[100];

    printf("Temperature Converter\n\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose conversion (1 or 2): ");
    scanf("%d", &choice);

    printf("How many temperatures do you want to convert? ");
    scanf("%d", &n);

    printf("Enter %d temperatures: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &temp[i]);
    }

    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            converted[i] = (1.8 * temp[i]) + 32;
        }

        printf("\nConverted Temperatures:\n");
        for (int i = 0; i < n; i++) {
            printf("%.2f°C = %.2f°F\n", temp[i], converted[i]);
        }

    } else if (choice == 2) {
        for (int i = 0; i < n; i++) {
            converted[i] = 0.56 * (temp[i] - 32);
        }

        printf("\n\nConverted Temperatures:\n");
        for (int i = 0; i < n; i++) {
            printf("%.2f°F = %.2f°C\n", temp[i], converted[i]);
        }

    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}