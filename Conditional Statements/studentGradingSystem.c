//* Student Grade Evaluating System with Remark

#include <stdbool.h>
#include <stdio.h>

int main() {

    int grade = 85;
    const int PASSING_SCORE = 75;
    bool pass;

    if (grade >= 90 && grade <= 100) {
        printf("Outstanding\n");
        pass = true;
    } else if (grade >= 85 && grade <= 89) {
        printf("Very Satisfactory\n");
        pass = true;
    } else if (grade >= 80 && grade >= 84) {
        printf("Satisfactory\n");
        pass = true;
    } else if (grade >= PASSING_SCORE && grade <= 79) {
        printf("Fairly Satisfactory\n");
        pass = true;
    } else if (grade < PASSING_SCORE) {
        printf("Did Not Meet Expectations\n");
        pass = false;
    } else {
        printf("Invalid Score\n");
    }

    if (pass == true) {
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}