//* Testing operators for different formulas

#include <stdio.h>

int main () {

    /*Area of a Rectangle
    Store length and width in variables.
    Calculate area = length × width.*/

    //add const to constant variables

    const float PI = 3.1415926535897932;

    int length = 65;
    int width = 64;
    float radius = 54;
    
    int area_rectangle = length * width;
    int perimeter = 2 * (length + width);
    float area_circle_radius = PI * (radius * radius);
    float circumference = 2 * PI * radius;
    
        printf("Length of the rectangle is %d\n", length);
        printf("Width of the rectangle is %d\n", width);
        printf("Area of the rectangle is %d\n", area_rectangle);
        printf("Perimeter of the rectangle is %d\n", perimeter);
        printf("Area of the circle is %.2f\n", area_circle_radius);
        printf("Circumference of the circle is %.2f\n", circumference);

    return 0;
}