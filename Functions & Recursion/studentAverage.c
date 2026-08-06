//* Using functions to calculate the average grade and display remark

#include <stdio.h>

float calculateAverageGrade(float studentGrades[5]);
void displayRemark(float average);

int main() {

    float studentGrades[5];
    float average;

    printf("Enter the grades for 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &studentGrades[i]);
    }

    printf("\n");

    average = calculateAverageGrade(studentGrades);

    printf("Average Grade: %.2f\n", average);

    displayRemark(average);

    return 0;
}

float calculateAverageGrade(float studentGrades[5]) {
    float sum = 0.0;

    for (int i = 0; i < 5; i++) {
        sum += studentGrades[i];
    }

    return sum / 5;
}

void displayRemark(float average) {
    if (average >= 90) {
        printf("With Honors\n");
    } else if (average <= 75 && average >= 89) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
}