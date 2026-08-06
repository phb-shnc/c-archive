/*
    * Temperature Analyzer
        * Asks user to input the temperature for 7 days
        * and stores the information in an array
        * Computes the average temperature for the past week
        * Displays the highest temperature of the week
*/

#include <stdio.h>

int main() {
    float temp[7], average, highest;
    float sum = 0.0f;
    int highestDay = 1;

    for (int i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temp[i]);

        sum += temp[i];

        if (i == 0 || temp[i] > highest) {
            highest = temp[i];
            highestDay = i + 1;
        }
    }

    average = sum / 7;

    printf("\nAverage temperature for the past week: %.2f\n", average);
    printf("The highest temperature was %.1f on day %d.\n", highest, highestDay);

    return 0;
}