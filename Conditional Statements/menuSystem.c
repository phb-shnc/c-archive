//* Game Menu System

#include <stdio.h>

int main() {

    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Play Game\n");
        printf("2. Load Game\n");
        printf("3. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nPlaying Game...\n");
                break;
            case 2:
                printf("\nLoading Game...\n");
                break;
            case 3:
                printf("\nExiting...\n\n\n");
                break;
            default:
                printf("\nInvalid choice. Try again.\n\n");
        }

    } while (choice != 3);

    return 0;
}