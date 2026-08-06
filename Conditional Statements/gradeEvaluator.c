//* Grade Evaluator

#include <stdio.h>

int main() {

    char name[50];
    int grade;

    printf("Enter student's name: ");
    scanf("%s", &name[50]);

    printf("Enter grade: ");
    scanf("%d", &grade);

    printf("\nRemark: ");

    if (grade >= 90 && grade <= 100) {
        printf("Excellent\n");
    } else if (grade >= 80 && grade <= 89) {
        printf("Very Good\n");
    } else if (grade >= 70 && grade <= 79) {
        printf("Good\n");
    } else if (grade >= 60 && grade <= 69) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}