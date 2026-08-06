//* Displaying the sum of all elements of a hard-coded 2d array

#include <stdio.h>

int main() {

    int grade[3][4] = {
        {90, 87, 98, 86},
        {88, 84, 89, 93},
        {92, 90, 92, 95},
    };

    int sum = 0;
    int row = 3;
    int column = 4;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            sum += grade[i][j];
        }
    }

    printf("\nSum of all elements: %d", sum);

    return 0;
}