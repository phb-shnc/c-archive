/*
    * Student Records
        * Uses an array structure to store student records
        * Displays the information of all students
        * Displays the oldest student's information based on age
        * Calculates the average grade of all students
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int studentNum;
    int age;
    double grade;
};

void displayAll(struct Student data[], int size);
void oldestStudent(struct Student data[], int size);
void average(struct Student data[], int size);

int main() {
    struct Student data[2];

    printf("Enter the details of 2 students:\n\n");

    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);

        printf("Name: ");
        fgets(data[i].name, sizeof(data[i].name), stdin);
        data[i].name[strcspn(data[i].name, "\n")] = '\0';

        printf("Student Number: ");
        scanf("%d", &data[i].studentNum);

        printf("Age: ");
        scanf("%d", &data[i].age);

        printf("Grade: ");
        scanf("%lf", &data[i].grade);

        getchar();

        printf("\n");
    }
    
    displayAll(data, 2);
    oldestStudent(data, 2);
    average(data, 2);

    return 0;
}

void displayAll(struct Student data[], int size) {
    printf("Information of all students:\n\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", data[i].name);
        printf("Student Number: %d\n", data[i].studentNum);
        printf("Age: %d\n", data[i].age);
        printf("Grade: %.lf\n\n", data[i].grade);
    }
}

void oldestStudent(struct Student data[], int size) {
    int oldest = 0;
    for (int i = 1; i < size; i++) {
        if (data[i].age > data[oldest].age) {
            oldest = i;
        }
    }
    printf("The oldest student is:\n");
    printf("Name: %s\n", data[oldest].name);
    printf("Student Number: %d\n", data[oldest].studentNum);
    printf("Age: %d\n", data[oldest].age);
    printf("Grade: %.2lf\n\n", data[oldest].grade);
}

void average(struct Student data[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i].grade;
    }
    printf("The average grade of all students is: %.2lf\n", sum / size);
}