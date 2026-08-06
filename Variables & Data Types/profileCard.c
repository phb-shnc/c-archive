//* Creating a profile card - Playing with different data types and variables

#include <stdio.h>

int main () {

    /*Fake Profile Card
    Store name, age, and favorite hobby in variables.
    Print it as a profile:*/


    char NAME[] = "Phoebe";
    int age = 18;
    char hobby[] = "Programming";

    printf("==== %s's Profile ====\n", NAME);
    printf("NAME: %s\n", NAME);
    printf("AGE: %d\n", age);
    printf("HOBBY: %s\n", hobby);

    return 0;
}