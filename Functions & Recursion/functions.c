//* Collection of Function Tests

#include <stdio.h>
/*//#include <math.h>

//function declaration
void greet(char name[], int age);

int main() {

    // pre-defined functions
    /*printf("%.2f\n", sqrt(16));
    printf("%.2f\n", pow(2,3));
    printf("%.2f\n", ceil(1.4));
    printf("%.2f\n", floor(1.9));
    printf("%.2f\n", round(1.49));

    greet("Phoebe Shanice", 19);
    greet("Precious Jocson", 20);

    return 0;
}

// function definition
void greet(char name[], int age) {
    printf("Happy Birthday, %s!\n", name);
    printf("You are %d years old.\n", age);
}*/

void sum(int a, int b);

int main() {

    int x = 20;
    int y = 30;

    sum(10, 20);
    sum(50, 100);

    //int result = sum(x, y); 
    //printf("The sum of %d and is %d.\n", x, y, sum(x,y));

    return 0;
}

void sum(int a, int b) {
    int result = a + b;
    printf("The sum of %d and %d is %d. \n", a, b, result);
    //return a + b;
}