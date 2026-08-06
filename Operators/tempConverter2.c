//* Simple Temperature Converter

#include <stdio.h>

int main() {

    float celsius;

    printf("\t| Celsius to Fahrenheit Converter |\t\n");
    printf("Enter Celsius Temperature: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}