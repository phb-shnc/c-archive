//* Asking user input for length and width to compute area of a rectangle

#include <stdio.h>

int main () {

    const int LENGTH;
    const int WIDTH;

    printf("Enter length: ");
    scanf("%d", &LENGTH);

    printf("Enter width: ");
    scanf("%d", &WIDTH);

    printf("Area of the rectangle is: %d", LENGTH * WIDTH);

    return 0;
}