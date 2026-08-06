//* Copying a string without strcpy()

#include <stdio.h>

int main() {
    
    char originalString[100], copiedString[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(originalString, sizeof(originalString), stdin);

    while (originalString[i] != '\0') {
        copiedString[i] = originalString[i];
        i++;
    }

    copiedString[i] = '\0';
    
    printf("Copied string: %s\n", copiedString);

    return 0;
}