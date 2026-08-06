//* Collection of File Handling Tests

#include <stdio.h>

int main() {
    FILE *file = fopen("fileHandling.txt", "w+");

    char name[50];
    int age;
    char course[30];

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    getchar();

    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);

    fprintf(file, "Student Name: %s", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Course: %s", course);

    /*fprintf(file, "This will overwrite existing content.\n");
    fprintf(file, "New Content:\n");
    fprintf(file, "John, 85\n");
    fprintf(file, "Anna, 90\n");
    fprintf(file, "Mark, 78\n");*/

    //fprintf(file, "This line is appended.\n");

    rewind(file);

    char line[100];

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    printf("\n");

    /*char name[50];
    int score;

    while (fscanf(file, "%[^,],%d\n", name, &score) == 2) {
        printf("Name: %s, Score: %d\n", name, score);
    }*/

    fclose(file);

    printf("Data saved to fileHandling.txt successfully.\n");

    return 0;
}