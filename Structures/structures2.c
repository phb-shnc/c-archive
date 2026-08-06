//* Collection of Structure Tests (2)

#include <stdio.h>
//#include <stdlib.h> // for dynamic allocation
#include <string.h>

/*struct Student {
    int id;
    char name[50];
    float grade;
};*/

/*struct Location {
    float latitude;
    float longitude;
};

void displayLocation(struct Location loc) {
    printf("Location: %.2f, %.2f", loc.latitude, loc.longitude);
}

void updateLocation(struct Location *loc) {
    loc->latitude = 15.7655;
    loc->longitude = 121.5778;
}*/

struct Book {
    char title[100];
    char author[50];
    float price;
};

struct Book createBook(char title[], char author[], float price);

int main() {
    /*struct Student s1 = {101, "Juan Dela Cruz", 85.5};
    struct Student *studentPtr = &s1;

    printf("Name: %s.\n", studentPtr->name);
    printf("Grade: %.2f.\n", studentPtr->grade);

    studentPtr->grade = 92.5;
    
    printf("\nAfter Update:\n");
    printf("Name: %s.\n", studentPtr->name);
    printf("Grade: %.2f.\n", studentPtr->grade);*/

    /*struct Student *studentPtr = (struct Student*) malloc(sizeof(struct Student));

    if (studentPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    studentPtr->id = 101;
    strcpy(studentPtr->name, "Juan Dela Cruz");
    studentPtr->grade = 85.5;

    printf("ID: %d.\n", studentPtr->id);
    printf("Name: %s.\n", studentPtr->name);
    printf("Grade: %.2f.\n", studentPtr->grade);

    free(studentPtr);

    printf("\nAfter Free Command\n");
    printf("ID: %d.\n", studentPtr->id);
    printf("Name: %s.\n", studentPtr->name);
    printf("Grade: %.2f.\n", studentPtr->grade);*/

    /*struct Location rider = {14.5995, 120.9842};

    displayLocation(rider);
    updateLocation(&rider);

    printf("\nAfter Update:\n");
    displayLocation(rider);*/

    struct Book newBook = createBook("Clean Code", "Robert C. Martin", 899.00);

    printf("New Book Registered:\n");
    printf("Title: %s\n", newBook.title);
    printf("Author: %s\n", newBook.author);
    printf("Price: %.2f\n", newBook.price);

    return 0;
}

struct Book createBook(char title[], char author[], float price) {
    struct Book b;
    strcpy(b.title, title);
    strcpy(b.author, author);
    b.price = price;
    return b;
}