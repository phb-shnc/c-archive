//* Simple calculator using user input for 2 integers and calculates its 4 basic operations

#include <stdio.h>

int main() {

    int number1;
    int number2;

    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    printf("Sum: %d\n", number1 + number2);
    printf("Difference: %d\n", number1 - number2);
    printf("Product: %d\n", number1 * number2);
    printf("Quotient: %d\n", number1 / number2);

    return 0;
}