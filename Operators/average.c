//* Computing and printing average of 3 marks

#include <stdio.h>

int main () {

    /*Marks Average
    Store 3 grades.
    Find and print their average.*/

    int mark1 = 10;
    int mark2 = 8;
    int mark3 = 9;

    float average = (mark1 + mark2 + mark3) / 3;

        printf("%.2f", average);

    return 0;
}