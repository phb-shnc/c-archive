//* Collection of String Tests

#include <stdio.h>
#include <string.h>

int main() {
    char message[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s\n", message);

    /*char message[50];

    printf("Please enter a message: ");
    scanf("%s", message);

    printf("The message is %s. \n", message);

    message[1] = '\0'; // null terminator

    printf("The new message is %s.\n", message);

    //printf("The characters are <%c> <%c> <%c> <%c> <%c>\n", message[0], message[1], message[2], message[3], message[4]);*/

    /*char name[30];
    char copyOfName[30];
    int length;

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    length = /*(int)strlen(name);

    printf("Your name is %s.\n", name);
    printf("The length of the name is %d characters.\n", length);

    strcpy(copyOfName, name);
    printf("The copy of name: %s.\n", copyOfName);*/

    /*char firstName[30];
    char lastName[30];

    printf("Please enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0;

    printf("Please enter your last name: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = 0;

    strcat(firstName, lastName);

    printf("Your name is %s.\n", firstName);*/

    /*char password1[] = "admin123";
    char password2[] = "admin123";

    if(strcmp(password1, password2) == 0) {
        printf("Passwords match!\n");
    } else {
        printf("Passwords do not match!\n");
    }*/

    return 0;

}