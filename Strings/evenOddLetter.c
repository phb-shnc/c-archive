//* Calculating the length of a string if it is even or odd

#include <stdio.h>
#include <string.h>

int main() {

    char str[50];
    int length;

    printf("Enter the name: ");
    scanf("%s", str);

    length = strlen(str);

    if (length % 2 == 0) {
        printf("1\n", length);
    } else {
        printf("2\n", length);
    }

    return 0;
}