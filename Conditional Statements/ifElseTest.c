//* Collection of If-Else Tests and Programs

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    /*if (condition) {
        block of code to be executed if the condition is true
    } else {
        block of code to be executed if the condition is false
    }

    if (condition1) {
        block of code to be executed if condition1 is true
    } else if (condition2) {
        block of code to be executed if the condition1 is false and condition2 is true
    } else {
        block of code to be executed if the condition1 is false and condition2 is false
    }
    
    shortcut
    variable = (condition) ? expressionTrue : expressionFalse;*/


    int phoebe = 7;
    int shanice = 7;

    if (phoebe >= shanice) {
        printf("Phoebe is bigger\n\n");
    } else {
        printf("Shanice is bigger\n\n");
    }


    int x = 20;
    int y = 18;

    if (x > y) {
        printf("20 is greater than 18\n\n");
    }


    int time = 22;

    if (time < 18) {
        printf("Good morning\n\n");
    } else if (time < 20) {
        printf("Good day\n\n");
    } else {
        printf("Good Evening\n\n");
    }
    (time < 18) ? printf("Good day\n\n") : printf("Good Evening\n\n");


    int xx = 10;
    int yy = 15;

    if (xx < 20) {
        printf("x is less than 20\n\n");
    }
        if (yy < 20) {
            printf("y is less than 20\n\n");
        }
    

    int doorCode = 1337;

    if (doorCode == 1397) {
        printf("Correct code.\nThe door is now open.\n\n");        
    } else {
        printf("Wrong code.\nThe door remains closed.\n\n");
    }


    int age = 2;
    bool isCitizen = false;

    if (age >= 18) {
        printf("Old enough to vote.\n\n");

        if (isCitizen) {
            printf("And you are a citizen, so you can vote.\n\n");
        } else {
            printf("But you must be a citizen to vote.\n\n");
        }
    } else {
        printf("Not old enough to vote.\n\n");
    }


    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3;

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted\n\n");
    } else {
        printf("Access denied\n\n");
    }


    /*
    * Positive, Negative, or Zero
    * Use if, else if, else to categorize a number.
    */

        int number;

        printf("Enter number to check if it is Positive, Negative, or Zero: \n");
        scanf("%d", &number);

        if (number > 0) {
            printf("\n%d is a positive number.\n\n", number);
        } else if (number < 0) {
            printf("\n%d is a negative number\n\n", number);
        } else {
            printf("\nThe number is Zero.\n\n");
        }


    /*
    * Maximum of Two Numbers
    * Compare two numbers and print the larger one.
    */

        int num1, num2;

        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        if (num1 > num2) {
            printf("%d > %d\n\n", num1, num2);
        } else if (num2 > num1) {
            printf("%d > %d\n\n", num2, num1);
        } else {
            printf("%d = %d\n\n", num1, num2);}
    

    /*
    * Maximum of Three Numbers
    * Use if…else if…else to check which is biggest.
    */

        int num3, num4, num5;

        printf("Enter 3 numbers: ");
        if (scanf("%d %d %d", &num3, &num4, &num5) != 3) {
            printf("Error: Enter only 3 numbers.\n\n");
            return 1;
        }

        int max = num3;
        if (num4 > max) {
            max = num4;
        }
        if (num5 > max) {
            max = num5;
        }

        printf("%d is the biggest.\n\n", max);


    /*
    * Pass or Fail Program
    * Input a grade and check if it’s above passing (say 75).
    */

        int grade;

        printf("Enter your grade: ");
        scanf("%d", &grade);

        if (grade >= 75) {
            printf("You passed.\n\n");
        } else {
            printf("You failed.\n\n");
        }


    /*
    * Simple Age Category
    * Child (0–12), Teen (13–19), Adult (20+).
    */

        int age2;

        printf("Enter your age: ");
        scanf("%d", &age2);

        if (age2 >= 0 && age2 <= 12) {
            printf("You're a Child.\n\n");
        } else if (age2 >= 13 && age2 <= 19) {
            printf("You're a Teen.\n\n");
        } else if (age2 >= 20) {
            printf("You're an Adult.\n\n");
        } else {
            printf("Invalid Age.\n\n");
        }


    /*
    * Voting Eligibility
    * Check if age >= 18.
    */

        int age3;

        printf("Enter your age: ");
        scanf("%d", &age3);

        if (age3 < 18) {
            printf("You're not eligible for voting.\n\n");
        } else if (age3 >= 18) {
            printf("You're eligible to vote.\n\n");
        }


    /*
    * Temperature Check
    * Too Cold (<20), Just Right (20–30), Too Hot (>30).
    */

        int temperature;

        printf("Enter temperature: ");
        scanf("%d", &temperature);

        if (temperature < 20) {
            printf("Too Cold.\n\n");
        } else if (temperature >= 20 && temperature <= 30) {
            printf("Just Right.\n\n");
        } else {
            printf("Too Hot.\n\n");
        }


    /*
    * Leap Year Checker
    * Use conditions with % and logical operators.
    */

        int year;

        printf("Enter the year: ");
        scanf("%d", &year);

        if (year % 4 == 0) {
            printf("This year is a leap year.\n\n");
        } else {
            printf("This year is a normal year.\n\n");
        }


    /*
    * Simple Calculator
    * Take two numbers and an operator (+ - * /), use if or else if to perform the operation.
    */

        int num6, num7;
        char operator;

        printf("Enter first number: ");
        scanf("%d", &num6);
        printf("Enter second number: ");
        scanf("%d", &num7);
        printf("Choose an operator (+ - * /): ");
        scanf(" %c", &operator); // needs space before format specifier

        if (operator == '+') {
            printf("\n%d + %d = %d\n\n", num6, num7, num6 + num7);
        } else if (operator == '-') {
            printf("\n%d - %d = %d\n\n", num6, num7, num6 - num7);
        } else if (operator == '*') {
            printf("\n%d * %d = %d\n\n", num6, num7, num6 * num7);
        } else if (operator == '/') {
            printf("\n%d / %d = %.2f\n\n", num6, num7, (float) num6 / num7);
        } else if (operator != '+', '-', '*', '/') {
            printf("\nInvalid input.\n\n");
        }


    /*
    * Ternary Operator Practice
    * Short hand for “pass/fail” or “even/odd”.
    */

        int grade2 = 90;
        (grade2 >= 75) ? printf("Passed.\n\n") : printf("Failed.\n\n");

        int number2 = 16;
        (number2 % 2 == 0) ? printf("Even.\n\n") : printf("Odd.\n\n");


    /*
    * Nested If Example
    * Example: If age >= 18, then inside that check if age >= 60 (senior citizen).
    */

        int age4 = 70;
        
        if (age4 >= 18) {
            printf("You're Legal.\n");
            if (age4 >= 60) {
                printf("You're a Senior Citizen\n\n");
            }
        }


    /*
    * Character Checker
    * Use conditions to check if a char is uppercase, lowercase, or digit.
    */

        char character;

        printf("Enter a character: ");
        scanf(" %c", &character);

        if (character >= 'a' && character <= 'z') {
            printf("This is a lowercase character.\n\n");
        } else if (character >= 'A' && character <= 'Z') {
            printf("This is an uppercase character.\n\n");
        } else if (character >= '0' && character <= '9') {
            printf("This is a digit.\n\n");
        } else {
            printf("This is a special character or symbol.\n\n");
        }


    /*
    * Login Simulation (basic)
    * Compare a stored password with an entered one.
    */

        char storedPassword[16] = "Admin123";
        char enteredPassword[16];

        printf("Enter your password: ");
        scanf("%s", &enteredPassword);

        if (strcmp(enteredPassword, storedPassword) == 0) {
            printf("Password is correct. User has been logged in.\n\n");
        } else {
            printf("Password is incorrect. User has not been logged in.\n\n");
        }


    /*
    * Traffic Light Simulation
    * If color is “red”, print stop. If “yellow”, print wait. Else, print go.
    */

        char trafficColor[10];

        printf("Enter the traffic color (red, yellow, green): ");
        scanf("%s", trafficColor);

        if (strcmp(trafficColor, "red") == 0) {
            printf("Stop.\n\n");
        } else if (strcmp(trafficColor, "yellow") == 0) {
            printf("Wait.\n\n");
        } else if (strcmp(trafficColor, "green") == 0) {
            printf("Go.\n\n");
        } else {
            printf("Invalid traffic color. Try again\n\n");
        }

    return 0;
}