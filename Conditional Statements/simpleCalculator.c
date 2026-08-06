//* Simple Calculator using switch case

#include <stdio.h>

int main() {

    int num1 = 5;
    int num2 = 2;
    int choice = 4;
    float result;

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%d + %d = %.f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%d - %d = %.f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%d * %d = %.f\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
            }
            result = (float) num1 / num2;
            printf("%d / %d = %.2f\n", num1, num2, result);
            break;
    }

    return 0;
}