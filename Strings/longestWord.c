//* Calculating the length of the longest word in a string

#include <stdio.h>
#include <string.h>

int main() {

    char str[101];
    int wordCount;
    int maxLength = 0;

    printf("Enter the number of words: ");
    scanf("%d", &wordCount);

    printf("Enter the text: ");
    for (int i = 0; i < wordCount; i++){
        scanf("%s", str);
    
        int currentLength = strlen(str);

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("The length of the longest word is: %d", maxLength);

    return 0;
}