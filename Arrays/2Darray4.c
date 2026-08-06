//* Finding a specific element of a hard-coded 2d array using user input

#include <stdio.h>

int main() {

    int grade[3][4] = {
        {90, 87, 98, 86},
        {88, 84, 89, 93},
        {92, 90, 92, 95},
    };

    int search;
    int row = 3;
    int column = 4;

    printf("Enter the element you want to search for: ");
    scanf("%d", &search);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (grade[i][j] == search) {
                printf("\nElement %d found at row %d, column %d", search, i + 1, j + 1);
            }
        }
    }

    return 0;
}