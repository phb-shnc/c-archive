//* Simple Calculator using switch case and user input

#include <stdio.h>

int main() {

    float number1, number2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &number2);

    switch (operator) {
        case '+':
            result = number1 + number2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (number2 != 0)
                result = number1 / number2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid operator. Use +, -, * or /.\n");
    }

    return 0;
}