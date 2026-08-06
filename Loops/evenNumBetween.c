//* Using a for loop to find the even numbers between 2 integers

#include <stdio.h>

int main () {

    int start, end, num;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers between %d and %d are: \n", start, end);
    for (num = start; num <= end; num++) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
    }

    return 0;
}