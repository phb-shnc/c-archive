//* Simple Time Converter - Converts Min to Sec and Day to Hour

#include <stdio.h>

int main () {

    /*Convert Minutes to Seconds
    Convert Days to Hours*/

    //add const to constant variables

    float minutes = .5;
    float days = .5;

    const float MIN_SEC = minutes * 60;
    const float DAYS_HR = days * 24;

        printf("%.1f minute/s = %.1f second/s\n", minutes, MIN_SEC);
        printf("%.1f day/s = %.1f hour/s\n", days, DAYS_HR);

    return 0;

}