//* Displaying the maximum and minimum element of a hard-coded 2d array

#include <stdio.h>

int main() {

    int grade[3][4] = {
        {90, 87, 98, 86},
        {88, 84, 89, 93},
        {92, 90, 92, 95},
    };

    int max, min = grade[0][0];
    int row = 3;
    int column = 4;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (grade[i][j] > max) {
                max = grade[i][j];
            }
            if (grade[i][j] < min) {
                min = grade[i][j];
            }
        }
    }

    printf("\nThe maximum element: %d", max);
    printf("\nThe minimum element: %d", min);

    return 0;
}