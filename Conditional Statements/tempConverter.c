//* Temperature Converter using switch case and user input

#include <stdio.h>

int main() {

    float temperature;
    float formula;
    int choice;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    printf("Choose the conversion (1 - Celsius, 2 - Farenheit): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            formula = (temperature - 32) * 0.5556f;
            float celsiusFormula = formula;
            printf("Conversion to Celsius: %.2f degrees", celsiusFormula);
            break;
        case 2:
            formula = (temperature * 1.8f) + 32;
            float fahrenheitFormula = formula;
            printf("Conversion to Fahrenheit: %.2f degrees", fahrenheitFormula);
            break;
        default:
            printf("Invalid input. Please try again.");
    }

    return 0;
}