//* Collection of Pointer Tests

#include <stdio.h>

void timesTwo(int *);
// int add(int, int);
void add(int, int, int*);

int main() {

    int number;

    printf("Please enter an integer: ");
    scanf("%d", &number);

    printf("In main: You entered %d\n", number);

    timesTwo(&number);

    printf("In main: The value of number is %d\n", number);

    int a;
    int b;
    int sum;

    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);

    //sum = add(a,b);
    add(a, b, &sum);

    printf("%d + %d = %d\n", a, b, sum);

    /*int score = 60;
    int *scorePointer = &score;

    double percentage = 78.45;
    double *percentagePointer = &percentage;

    char letter = 'B';
    char *letterPointer = &letter;*/

    /*printf("The score is %d and its address is %p\n", score, scorePointer);
    printf("The percentage is %lf and its address is %p\n", percentage, percentagePointer);
    printf("The letter is %c and its address is %p\n", letter, letterPointer);*/

    /*printf("The score is %d and its address is %p\n", *scorePointer, scorePointer);
    printf("The percentage is %lf and its address is %p\n", *percentagePointer, percentagePointer);
    printf("The letter is %c and its address is %p\n", *letterPointer, letterPointer);*/

    // int *pointer = &score;

    // printf("%p\n", &score);
    // printf("The value of score is &d and its memory address is %p.\n", score, &score);
    // printf("The value of score is &d and its memory address is %p.\n", score, pointer);

    return 0;
}

void timesTwo(int *numPointer) {
    printf("In the function: the number is %d.\n", *numPointer);

    *numPointer = *numPointer * 2;

    printf("In the function: the new number is %d.\n", *numPointer);
}

/*int add(int x, int y) {
    int z;
    z = x + y;
    printf("Added numbers in the function!\n");
    return z;
}*/

void add(int x, int y, int *resultPointer) {
    int z;
    z = x + y;
    printf("Added numbers in the function!\n");
    *resultPointer = z;
}