//* Temperature Record for 7 days that displays the highest, lowest, and average temperature

#include <stdio.h>

int main() {

    const int SEVEN_DAYS = 7;
    float dailyTemp[SEVEN_DAYS];
    float sum = 0.0;
    float highest, lowest;

    printf("Enter the temperatures for %d days:\n", SEVEN_DAYS);
    for (int i = 0; i < SEVEN_DAYS; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &dailyTemp[i]);
        sum += dailyTemp[i];

        if (i == 0) {
            highest = lowest = dailyTemp[i];
        } else {
            if (dailyTemp[i] > highest) {
                highest = dailyTemp[i];
            }
            if (dailyTemp[i] < lowest) {
                lowest = dailyTemp[i];
            }
        }
    }

    printf("\nRecorded Temperatures: ");
    for (int i = 0; i < SEVEN_DAYS; i++) {
        printf("%.1f ", dailyTemp[i]);
    }

    float average = sum / SEVEN_DAYS;

    printf("\nHighest Temperature: %.1f C\n", highest);
    printf("Lowest Temperature: %.1f C\n", lowest);
    printf("Average Temperature %.1f C\n", average);

    return 0;
}