//* Testing variables with different data types

#include <stdio.h>

int main () {

    /*Different Data Printer
    Make variables of type int, float, char, and double.
    Print them all in one program.*/

    char NAME[] = "Phoebe";
    int STUDENT_ID = 12345;
    int studentAge = 18;
    float studentFee = 5000;
    char studentGrade = 'A';
    const double PI = 3.1415926535897932;

        printf("Student Name: %s\n", NAME);
        printf("Student ID: %d\n",STUDENT_ID);
        printf("Student Age: %d\n", studentAge);
        printf("Student Fee: %.2f\n", studentFee);
        printf("Student Grade: %c\n", studentGrade);
        printf("Pi Value: %.15f\n", PI);

    /*BMI Calculator (Hardcoded Values)
    Use float for weight and height.
    Formula: BMI = weight / (height * height)*/

    float weightkg = 69.5;
    float heightcm = 160.5;

    float bmi = weightkg / (heightcm * heightcm) * 10000;

        printf("\nStudent Weight: %.1f\n", weightkg);
        printf("Student Height: %.1f\n", heightcm);
        printf("Student BMI: %.1f\n", bmi);

    return 0;

}