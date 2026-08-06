//* Library Management System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 5

typedef struct {
	char title[50];
	char author[50];
	int year;
	char isbn[15];
} Book;

void updateBook(Book b[], int size);
void displayBook(Book b[], int size);
void displayOldestBook(Book b[], int size);
void saveFile(Book b[], int size);
void readFile();

int main() {
	Book b[MAX_BOOKS];
	
	for (int i = 0; i < MAX_BOOKS; i++) {
		printf("Enter details for Book %d\n", i + 1);
		
		printf("Title: ");
		scanf(" %[^\n]s", b[i].title);
		
		printf("Author: ");
		scanf(" %[^\n]s", b[i].author);
		
		printf("Year: ");
		scanf("%d", &b[i].year);
				
		printf("ISBN: ");
		scanf(" %[^\n]s", b[i].isbn);
		
		printf("\n");
	}
	
	printf("---Update Book---\n\n");
	updateBook(b, MAX_BOOKS);
	
	printf("---Display Books---\n\n");
	displayBook(b, MAX_BOOKS);
	
	printf("---Display Oldest Book---\n\n");
	displayOldestBook(b, MAX_BOOKS);
	
	printf("---Saved File---\n\n");
	saveFile(b, MAX_BOOKS);
	
	printf("---Read File---\n\n");
	readFile();
	
	return 0;
}

void updateBook(Book b[], int size) {
	char isbnSearch[15];
	printf("Enter ISBN to Update Book: ");
	scanf(" %[^\n]s", isbnSearch);
	
	int found = 0;
	
	for (int i = 0; i < size; i++) {
		if (strcmp(b[i].isbn, isbnSearch) == 0) {
			printf("Enter updated details for Book %d\n", i + 1);
		
			printf("Enter New Title: ");
			scanf(" %[^\n]s", b[i].title);
			
			printf("Enter New Author: ");
			scanf(" %[^\n]s", b[i].author);
			
			printf("Enter New Year: ");
			scanf("%d", &b[i].year);
			
			printf("\nUpdated Details for Book %d\n", i + 1);
			
			printf("Title: %s\n", b[i].title);
			printf("Author: %s\n", b[i].author);
			printf("Year: %d\n\n", b[i].year);
			
			found = 1;
		}
	}
	
	if (!found) {
		printf("Book not found.\n\n");
	}
}

void displayBook(Book b[], int size) {
	for (int i = 0; i < size; i++) {
		printf("Title: %s\n", b[i].title);
		printf("Author: %s\n", b[i].author);
		printf("Year: %d\n", b[i].year);
		printf("ISBN: %s\n\n", b[i].isbn);
	}
}

void displayOldestBook(Book b[], int size) {
	int oldest = 0;
	
	for (int i = 1; i < size; i++) {
		if (b[i].year < b[oldest].year) {
			oldest = i;
		}
	}
	
	printf("Title: %s\n", b[oldest].title);
	printf("Author: %s\n", b[oldest].author);
	printf("Year: %d\n", b[oldest].year);
	printf("ISBN: %s\n\n", b[oldest].isbn);
}

void saveFile(Book b[], int size) {
	FILE *file = fopen("library.txt", "w");
	if (file == NULL) {
		printf("Error opening file for writing.\n");
		return;
	}
	
	for (int i = 0; i < size; i++) {
		fprintf(file, "%s\n", b[i].title);
		fprintf(file, "%s\n", b[i].author);
		fprintf(file, "%d\n", b[i].year);
		fprintf(file, "%s\n", b[i].isbn);
	}
	
	fclose(file);
}

void readFile() {
	FILE *file = fopen("library.txt", "r");
	if (file == NULL) {
		printf("Error opening file for reading.\n");
		return;
	}
	
	Book temp;
	int count = 1;
	
	while (fscanf(file, " %[^\n]s", temp.title) != EOF) {
		fscanf(file, " %[^\n]s", temp.author);
		fscanf(file, "%d", &temp.year);
		fscanf(file, " %[^\n]s", temp.isbn);
		
		printf("File Book: %d\n", count++);
		printf("Title: %s\n", temp.title);
		printf("Author: %s\n", temp.author);
		printf("Year: %d\n", temp.year);
		printf("ISBN: %s\n\n", temp.isbn);		
	}
	
	fclose(file);
}