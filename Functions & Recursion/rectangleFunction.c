//* Using functions to calculate the area of a rectangle

#include <stdio.h>

float calculateArea(float length, float width);

int main() {
    
    float length = 7;
    float width = 3;

    calculateArea(length, width);

    return 0;
}

float calculateArea(float length, float width) {
    float area = length * width;
    printf("The area of a rectangle with a length of %.f and width of %.f is %.f.\n\n", length, width, area);
}