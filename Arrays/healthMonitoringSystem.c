/*
    * Health Monitoring System
        * Asks user to input the calories burned for each day of the week
        * and stores the information in an array
        * Computes the total calories burned in the week
        * and the average calories burned per day
        * then prints the fitness activity level using if-else statements
*/

#include <stdio.h>

int main() {
    int calories[7], weeklyTotal = 0;
    float average;

    printf("Enter the calories burned for each day of the week:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &calories[i]);
        weeklyTotal += calories[i];
    }

    average = weeklyTotal / 7;

    printf("\nTotal calories burned in the week: %d\n", weeklyTotal);
    printf("Average calories burned per day: %.2f\n", average);

    printf("Fitness activity level: ");
    if (average > 700) {
        printf("Active\n\n");
    } else if ((average >= 401) && (average <= 700)) {
        printf("Moderate\n\n");
    } else {
        printf("Low\n\n");
    }

    return 0;
}