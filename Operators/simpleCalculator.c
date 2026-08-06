//* Simple hard-coded calculator

#include <stdio.h>

int main () {

    /*Simple Calculator (Hardcoded)
    Store two numbers in variables (int a = 5, b = 3;)
    Print their sum, difference, product, and quotient.*/

    //type conversion by assigning float to an int

    int x = 78;
    int y = 16;
    int z = 3;

    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    //int quotient = x / y;
    float quotient = (float) x / y;
    int remainder = x % y;
    int square = z * z;
    int cube = z * z * z;


        printf("%d\n", sum);
        printf("%d\n", difference);
        printf("%d\n", product);
        printf("%.1f\n", quotient);
        printf("%d\n", remainder);
        printf("The Square of %d is %d\n", z, square);
        printf("The Cube of %d is %d\n", z, cube);

        return 0;

}