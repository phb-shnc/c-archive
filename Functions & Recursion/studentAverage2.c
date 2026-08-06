/*
* Asking user to input the number of students in a class and the individual grades 
* then using a function to calculate the average grade
*/

#include <stdio.h>

float averageGrade(int totalStudents, float studentGrades[50]);

int main() {

    int totalStudents;
    float studentGrades[50];
    float average;

    printf("Enter the number of students in a class: ");
    scanf("%d", &totalStudents);

    for (int i = 0; i < totalStudents; i++) {
        printf("Enter the student %d grade: ", i + 1);
        scanf("%f", &studentGrades[i]);
        
    }

    average = averageGrade(totalStudents, studentGrades);

    printf("The average grade of the class is %.2f\n", average);

    return 0;
}

float averageGrade(int totalStudents, float studentGrades[50]) {
    float sum = 0.0f;

    for (int i = 0; i < totalStudents; i++) {
        sum += studentGrades[i];
    }
    return sum / totalStudents;
}