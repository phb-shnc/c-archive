//* Using gets to store multiple words in a string

#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    gets(name);

    printf("You entered the name: %s", name);

    return 0;
}