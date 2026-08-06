//* Collection of Variable and Data Type Tests

#include <stdio.h>

int main () {

//variable & data type practice code

//type variableName = value;
    //int myNum = 15;
    //char myInitial1 = 'P';
    //char myInitial2 = 'C';
    //char myName[] = "Phoebe";

//Declare a variable
    //float myDec;

//Assign a value to the variable
    //myDec = 2.5;
    //float myDec = 2.5;
    //float myOtherDec = 3.14;
    //float myOtherDec;
    //myOtherDec = myDec;
    //float a = 0.1, b = 0.2, c = 0.3;
    //int p, l, s;
    //p = l = s = 12;
    //float fl = 35e3; // 35 * 10^3 = 35000
    //double dl = 12E4; // 12 * 10^4 = 12000

        //printf("%d\n", myNum);
        //printf("%.2f\n", myDec);
        //printf("%s\n", myName);
        //printf("My favorite number is %d\n", myNum);
        //printf("Hi! My name is %s. My initials are %c and %c", myName, myInitial1, myInitial2);
        //printf("I love the number %d because the number %d is greater than %f\n", 15, 15, 14.25);
        //printf("x is %.2f & y is %.2f\n", 15.6, 16.5);
        //printf("%.1f\n", a + b + c);
        //printf("%d\n", p + l + s);
        //printf("%.2f\n", fl);
        //printf("%.2lf\n", dl);

//adding int & float
/* Mix Data Types in Math
Add int + double, float + char, etc.
See what the result looks like (you’ll start to notice type conversions).
Formatted Output Experiment
Try %d, %f, %c, %lf.
Compare how the output changes if you use the wrong specifier. */

    /*int a = 4;
    float b = 2.5;
    double c = 3;
    char d = 6;

        printf("%d\n", a + b);
        printf("%d\n", c + d);
        printf("%d\n", a + c);
        printf("%d\n", d + b);
        printf("%d\n", a + d);
        printf("%d\n", c + b);*/

/*Character ASCII Code Finder
Store a char like 'A'.
Print both the character and its ASCII value (as an int).*/

    //literally finding the ASCII code
    /*char P = 'P', h = 'h', o = 'o', e1 = 'e', b2 = 'b', e2 = 'e';

        printf("%d\n", P);
        printf("%d\n", h);
        printf("%d\n", o);
        printf("%d\n", e1);
        printf("%d\n", b2);
        printf("%d\n", e2);*/

    //printing the ASCII value using int
    /*char P = 80, h = 104, o = 111, e1 = 101, b2 = 98, e2 = 101;

        printf("%c", P);
        printf("%c", h);
        printf("%c", o);
        printf("%c", e1);
        printf("%c", b2);
        printf("%c", e2);*/

    /*int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));*/

    /*int age = 0;
    age = -37.2;
    printf("%u", age);*/

    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));

    int age = 37;

    printf("%ld\n", sizeof(age));
    printf("%ld", sizeof(int));

    //return 0;

}