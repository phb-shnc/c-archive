//* Testing building a simple calculator

#include <stdio.h>

int main () {

    int x = 1;
    int y = 2;

    int a = 3;
    int b = 4;
    int c = 5;

    int sum = x + y;
    int total = a + b + c;
    int multiply = a * b * c;
    int subtract = x - y;
    float divide1 = (float) a / b;
    float divide2 = (float) x / y;

        printf("1 + 2 is %d\n", sum);
        printf("%d\n", total);
        printf("%d\n", multiply);
        printf("%d\n", subtract);
        printf("%.1f\n", divide1);
        printf("%.1f\n", divide2);

    /*Simple Calculator with Booleans
    Compare results, like:
    a + b == c → prints 1 if correct, 0 if not.*/
    
    int a1 = 1;
    int b2 = 2;
    int c3 = 3;

        printf("%d\n", a1 + b2 == c3);

    return 0;

}