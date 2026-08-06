/*
* Using for loop inside if-else to ask user a number to generate its multiplication table
* and up to what number should the table go
*/

#include <stdio.h>

int main() {

    int number, limit;

    printf("\nEnter a number to generate its multiplication table: ");
    scanf("%d", &number);

    printf("Up to what number should the table go? ");
    scanf("%d", &limit);

    if (number <= 0 || limit <= 0) {
        printf("Please enter positive integers only.\n");
    } else {
        for (int i = 1; i <= limit; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }
    }

    printf("\n\n\n");

    return 0;
}