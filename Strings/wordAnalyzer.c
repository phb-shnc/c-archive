//* Asks user to input 5 words, computes the total characters, and displays word category

#include <stdio.h>
#include <string.h>

int countTotalCharacters(char str[5][50]);
void displayWordCategory(int wordLength);

int main() {

    char str[5][50];
    int wordLength;

    printf("Enter 5 words:\n");

    for (int i = 0; i < 5; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", str[i]);
    }

    printf("\n");

    wordLength = countTotalCharacters(str);

    printf("Total Characters: %d\n", wordLength);

    displayWordCategory(wordLength);

    return 0;
}

int countTotalCharacters(char str[5][50]) {
    int wordLength = 0;

    for (int i = 0; i < 5; i++) {
        wordLength += strlen(str[i]);
    }

    return wordLength;
}

void displayWordCategory(int wordLength) {
    if (wordLength > 30) {
        printf("Long Words\n");
    } else if (wordLength >= 15 && wordLength <= 30) {
        printf("Moderate Words\n");
    } else {
        printf("Short Words\n");
    }
}