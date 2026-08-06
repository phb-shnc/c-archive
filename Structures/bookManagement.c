/*
    * Book Management System
        * Uses an array structure to store book information
        * Displays all available books
        * Counts the books currently borrowed
        * Displays the oldest book
        * Allows user to search for a book using the book ID and checks if it is available or borrowed
*/

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int bookID;
    int year;
    char status;
};

int main() {
    int const SIZE = 2; 
    struct Book b[SIZE];

    int target;

    for (int i = 0; i < SIZE; i++) {
        printf("Book %d:\n", i + 1);

        printf("Enter book title: ");
        scanf(" %[^\n]%*c", b[i].title);

        printf("Enter book author: ");
        scanf(" %[^\n]%*c", b[i].author);

        printf("Enter book ID: ");
        scanf("%d", &b[i].bookID);

        printf("Enter book year: ");
        scanf("%d", &b[i].year);

        printf("Enter book status (A = Available, B = Borrowed): ");
        scanf(" %c", &b[i].status);

        printf("\n");
    }

    printf("\n--- All Available Books ---\n\n");
    for (int i = 0; i < SIZE; i++) {
        if (b[i].status == 'A' || b[i].status == 'a') {
            printf("Book %d\n", i + 1);
            printf("Book Title: %s\n", b[i].title);
            printf("Book Author: %s\n", b[i].author);
            printf("Book ID: %d\n", b[i].bookID);
            printf("Book Year: %d\n\n", b[i].year);
        }
    }

    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (b[i].status == 'B' || b[i].status == 'b') {
            count++;
        }
    }
    printf("There are %d books currently borrowed.\n", count);

    int oldestBookIndex = 0;
    for (int i = 1; i < SIZE; i++) {
        if (b[i].year < b[oldestBookIndex].year) {
            oldestBookIndex = i;
        }
    }
    printf("The oldest book is %s published %d.\n\n", b[oldestBookIndex].title, b[oldestBookIndex].year);

    int found = 0;
    printf("Enter the ID of the book you want to search: ");
    scanf("%d", &target);
    for (int i = 0; i < SIZE; i++) {
        if (target == b[i].bookID) {
            printf("\nThis book is currently");
            if (b[i].status == 'A' || b[i].status == 'a') {
                printf(" available\n");
            } else if (b[i].status == 'B' || b[i].status == 'b') {
                printf(" borrowed\n");
            }
            found = 1;
        }
    }
    if (found != 1) {
        printf("Book not found.\n");
    }

    return 0;
}