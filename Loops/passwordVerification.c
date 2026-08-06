//* Using if-else inside for loop to ask user to enter their password until they get the correct password

#include <stdio.h>
#include <string.h>

int main() {

    char fixedPassword[] = "1234";
    char inputPassword[100];

    for (int i = 0; i < 3; i++) {
        printf("Enter password: ");
        scanf("%s", inputPassword);

        if (strcmp(fixedPassword, inputPassword) == 0) {
            printf("Access Granted\n");
            break;
        } else {
            printf("Incorrect Password\n");
        }
    }

    return 0;
}