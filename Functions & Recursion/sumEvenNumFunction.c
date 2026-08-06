//* Calculating the sum of even numbers of 2 integers using functions

#include <stdio.h>

int sumEvenNumbers(int a, int b);
void displayResult(int result);

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    result = sumEvenNumbers(a, b);
    displayResult(result);

    return 0;
}

int sumEvenNumbers(int a, int b) {
    int result = 0;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result += i;
        }
    }
    return result;
}

void displayResult(int result) {
    printf("Sum of even numbers: %d\n", result);
}