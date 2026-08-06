//* Collection of Structure Tests

#include <stdio.h>
#include <string.h>

/*struct Date {
    char month[10];
    int day;
    int year;
};*/

struct Person {
    char name[50];
    int age;
    char occupation[50];
    //struct Date birthdate;
};

int main() {
    /*struct Person p1 = {"Phoebe Shanice", 19, "College Student", {"January", 10, 2007}};
    struct Person p2; //= {"Nixie Partible", 20, "Computer Programmer"};

    /*strcpy(p1.name, "Phoebe Shanice");
    p1.age = 19;
    strcpy(p1.occupation, "College Student");

    /*strcpy(p2.name, "Nixie Partible");
    p2.age = 20;
    strcpy(p2.occupation, "Computer Programmer");

    strcpy(p2.birthdate.month, "December");
    p2.birthdate.day = 12;
    p2.birthdate.year = 2005;

    printf("P1's name is %s.\n", p1.name);
    printf("P1's age is %d.\n", p1.age);
    printf("P1's occupation is %s.\n", p1.occupation);\

    printf("P1's birthdate is %s %d, %d.\n", p1.birthdate.month, p1.birthdate.day, p1.birthdate.year);

    printf("\n\n");

    printf("P2's name is %s.\n", p2.name);
    printf("P2's age is %d.\n", p2.age);
    printf("P2's occupation is %s.\n", p2.occupation);

    printf("P2's birthdate is %s %d, %d.\n", p2.birthdate.month, p2.birthdate.day, p2.birthdate.year);*/

    struct Person employee[3] = {
        {"Juan Dela Cruz", 18, "Student Leader"},
        {"Josefina Florencia", 34, "House Wife"},
        {"Victorina Teresita", 52, "Government Worker"},
    };

    for (int i = 0; i < 3; i++) {
        printf("Employee %d.\n", i + 1);
        printf("Employee Name: %s\n", employee[i].name);
        printf("Employee Age: %d\n", employee[i].age);
        printf("Employee Occupation: %s\n\n", employee[i].occupation);
    }

    return 0;
}