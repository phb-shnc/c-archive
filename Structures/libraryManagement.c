/*
    * Library Management System
        * Uses an array structure to store book information
        * Displays book information
        * Allows user to search books using the book ID and displays the book
*/

#include <stdio.h>

struct Book {
    int bookID;
    char title[50];
    char author[50];
    int price;
};

void addBook(struct Book library[], int n);
void displayBooks(struct Book library[], int n);
void searchBook(struct Book library[], int n);

int main() {
    struct Book library[50];

    int size;

    printf("Enter number of books: ");
    scanf("%d", &size);

    printf("\n");

    addBook(library, size);
    displayBooks(library, size);
    searchBook(library, size);

    return 0;
}

void addBook(struct Book library[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter Book ID: ");
        scanf("%d", &library[i].bookID);

        printf("Title: ");
        scanf(" %[^\n]%*c", &library[i].title);

        printf("Author: ");
        scanf(" %[^\n]%*c", &library[i].author);

        printf("Price: ");
        scanf("%d", &library[i].price);

        printf("\n");
    }
}

void displayBooks(struct Book library[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Book ID: %d\n", library[i].bookID);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: %d\n\n", library[i].price);
    }
}

void searchBook(struct Book library[], int n) {
    int target;
    printf("Enter Book ID to search: ");
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++) {
        if (target == library[i].bookID) {
            printf("Book Found!\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Price: %d\n", library[i].price);
        }
    }
}