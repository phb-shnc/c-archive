#include <stdio.h>

// Variable declaration
extern int a, b;
extern int c;
extern float f;

int func();

int main() {
    //* Change the Value of a Constant
    //! Can't make it work
    const int x = 10;
    printf("Initial Value of Constant: %d\n", x);

    // y is a pointer to constant x
    int y = x;
   
    // assign new value
    y = 100;
    printf("Value of Constant after change: %d\n", x);

    // variable definition
    int a, b;
    int c;
    float f;

    // actual initialization
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0/3.0;
    printf("value of f : %f \n", f);

    int i = func();

    return 0;
}

// function definition
int func() {
    return 0;
}