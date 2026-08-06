//* Displaying hard-coded 2d array and printing a specific element

#include <stdio.h>

int main() {

    int studentGrades[3][4] = {
        {90, 87, 98, 86},
        {88, 84, 89, 93},
        {92, 90, 92, 95},
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }

    printf("\nElement in row 3 and column 2 is %d.\n", studentGrades[2][1]);

    return 0;
}