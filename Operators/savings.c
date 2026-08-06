//* Savings Goal

#include <stdio.h>

int main () {

    /*Savings Goal
    Store current savings and goal.
    Print how much more you need to reach the goal.*/

    //add const to constant variables

    int savings = 1322;
    const int GOAL = 5000;

    int to_save = GOAL - savings;

        printf("%d left to save up", to_save);

    return 0;
}