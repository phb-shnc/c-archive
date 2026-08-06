//* Guess the number

#include <stdio.h>

int main() {

    int secret, guess;

    printf("Secret Number: ");
    scanf("%d", &secret);

    while(1) {
        printf("Guess Number: ");
        scanf("%d", &guess);

        if(guess < secret) {
            printf("It is more!\n");
        } else if(guess > secret) {
            printf("It is less!\n");
        } else if (guess == secret) {
            printf("\nCongratulations, you got the correct number!\n");
            break;
        }
    }

    return 0;
}