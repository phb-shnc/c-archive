/*
* Asking student their name, ID, and grades in 3 subjects
* Computing the average grade and display the result
*/

#include <stdio.h>
#include <string.h>

int main() {

    char studentName[100];
    int studentID;
    float mathGrade;
    float scienceGrade;
    float filipinoGrade;

    printf("\tINPUT\t\n");
    printf("Enter Student Name: ");
    fgets(studentName, sizeof(studentName), stdin);
    printf("Enter Student ID: ");
    scanf("%d", &studentID);
    printf("Enter Grade in Math: ");
    scanf("%f", &mathGrade);
    printf("Enter Grade in Science: ");
    scanf("%f", &scienceGrade);
    printf("Enter Grade in Filipino: ");
    scanf("%f", &filipinoGrade);

    printf("\n\tOUTPUT\t\n");
    printf("Student Name: %s", studentName);
    printf("Student ID: %d\n", studentID);
    printf("Grade in Math: %.2f\n", mathGrade);
    printf("Grade in Science: %.2f\n", scienceGrade);
    printf("Grade in Filipino: %.2f\n", filipinoGrade);

    float average = (mathGrade + scienceGrade + filipinoGrade) / 3;

    printf("\n----------------------------\n\n");
    printf("Average Grade: %.2f\n", average);

    if (average >= 75) {
        printf("Result: Passed\n\n");
    } else {
        printf("Result: Failed\n\n");
    }

    return 0;
}