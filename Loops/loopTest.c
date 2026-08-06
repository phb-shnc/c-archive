//* Collection of Loop Tests

//TODO: Loop Programs

#include <stdio.h>

int main () {

    // for loop
        /*for (int i = 0; i < 15; i++) {
            printf("%d ", i);
        }*/

    // break & continue using for loop
        /*for (int i = 0; i < 11; i++) {
            if (i == 6) {
                break;
            }
            printf("%d \n", i);
        }

        printf("\n");

        for (int i = 0; i < 11; i++) {
            if (i == 6) {
                continue;
            }
            printf("%d \n", i);
        }*/

        // modify for loop to print numbers from 10 to 15
            /*for (int i = 10; i < 16; i++) {
                printf("%d \n", i);
            }*/

        // change the look to print only even numbers up to 10
            /*for (int i = 0; i < 11; i++) {
                if (i % 2 == 0) {
                printf("%d \n", i);
                }
            }*/

    // while loop
        /*int i = 0;

        while (i < 10) {
            printf("%d \n", i);
            i++;
        }*/

        /*int i = 1;

        while (i < 100) {
            printf("%d \n", i);
            i *= 2;
        }*/

        // Modify code to print numbers from 5 to 1
            /*int i = 5;

            while (i >= 1) {
                printf("%d \n", i);
                i--;
            }*/

    // do-while loop
        /*int i = 0;

        do {
            printf("%d \n", i);
            i++;
        } while (i < 11);*/

        // Get a positive number
            /*int number;

            do {
                printf("Enter a positive number: ");
                scanf("%d", &number);
            } while ((number < 0) && (number == 0));
                printf("You entered: %d. \n", number);*/

        // Modify the code to allow only even numbers to be entered
            /*int number;

            do {
                printf("Enter only even numbers: ");
                scanf("%d", &number);
            } while (number % 2 != 0);
                printf("You entered an even number: %d. \n", number);*/

    

    return 0;
}