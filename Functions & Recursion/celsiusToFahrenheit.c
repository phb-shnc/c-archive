//* Converting celsius to fahrenheit using return and void type functions

#include <stdio.h>

float celsiusToFahrenheit(float celsius_temp);
void printCelsiusToFahrenheit(float celsius_temp);

int main() {

    // return type function

    float celsius_temp, fahrenheit_temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius_temp);

    fahrenheit_temp = celsiusToFahrenheit(celsius_temp);

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit_temp);

    // void type function

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius_temp);

    printCelsiusToFahrenheit(celsius_temp);

    return 0;
}

float celsiusToFahrenheit(float celsius_temp) {
    return (celsius_temp * 9/5) + 32;
}

void printCelsiusToFahrenheit(float celsius_temp) {
    float fahrenheit_temp = (celsius_temp * 9/5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit_temp);
}