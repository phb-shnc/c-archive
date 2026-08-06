//* Using string to display a name

#include <stdio.h>

int main() {

    char name[20];

    printf("What's your name?\n");
    scanf("%s", &name);

    printf("Good day %s! It's nice to meet you.", name);

    return 0;
}