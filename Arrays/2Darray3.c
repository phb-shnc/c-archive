//* Finding the element at a certain index of a hard-coded 2d array using user input

#include <stdio.h>

int main() {

    int grade[3][4] = {
        {90, 87, 98, 86},
        {88, 84, 89, 93},
        {92, 90, 92, 95},
    };
    
    int rowIndex;
    int columnIndex;

    printf("Enter the row index (0-2): ");
    scanf("%d", &rowIndex);
    printf("Enter the column index (0-3): ");
    scanf("%d", &columnIndex);    

    printf("\nGrade at row index %d, column index %d: %d", rowIndex, columnIndex, grade[rowIndex][columnIndex]);

    return 0;
}