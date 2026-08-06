//* Simple Temperature Converter

#include <stdio.h>

int main () {

    /*Temperature Converter
    Store a Celsius value in a variable.
    Convert it to Fahrenheit using a formula and print the result.*/

    float celsius = 0;
    float fahrenheit = (celsius * 9 / 5) + 32;

    celsius = fahrenheit;

        printf("%.2f", celsius);

    /*Temperature Safe Range
    temp >= 20 && temp <= 30.
    Prints 1 if inside range, 0 if outside.*/

    int temp = 25;

        printf("\n%d", temp >= 20 && temp <= 30);

    return 0;

}