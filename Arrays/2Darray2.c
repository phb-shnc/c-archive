//* Asking user input for 2d array elements

#include <stdio.h>

int main() {

    int grade[4][3];

    printf("Enter the elements of the 2D array:\n\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the value for row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &grade[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", grade[i][j]);
        }
        printf("\n");
    }

    return 0;
}