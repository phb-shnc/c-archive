//* Using functions to calculate the average temperature for 7 days and display the weather condition

#include <stdio.h>

float calculateAverageTemperature(float dailyTemperature[7]);
void displayWeatherCondition(float average);

int main() {

    float dailyTemperature[7];
    float average;

    printf("Enter temperature for 7 days:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &dailyTemperature[i]);
    }

    printf("\n");

    average = calculateAverageTemperature(dailyTemperature);

    printf("Average Temperature: %.2f\n", average);

    displayWeatherCondition(average);

    return 0;
}

float calculateAverageTemperature(float dailyTemperature[7]) {
    float sum = 0.0;

    for (int i = 0; i < 7; i++) {
        sum += dailyTemperature[i];
    }
    return sum / 7;
}

void displayWeatherCondition(float average) {
    if (average > 35) {
        printf("Very Hot\n");
    } else if (average > 25 && average < 35) {
        printf("Normal\n");
    } else {
        printf("Cold\n");
    }
}