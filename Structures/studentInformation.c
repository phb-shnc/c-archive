/*
    * Student Information System
        * Uses a structure to store student information
        * Displays student information
*/

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    float gwa;
};

int main() {
    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]%*c", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter GWA: ");
    scanf("%f", &s.gwa);

    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GWA: %.2f\n", s.gwa);

    return 0;
}