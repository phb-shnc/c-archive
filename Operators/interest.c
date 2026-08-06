//* Simple Interest Calculator

#include <stdio.h>

int main () {

    /*Simple Interest Calculator
    Formula: SI = (P * R * T) / 100
    Constants: principal, rate, time.*/

    float principal = 5000; //in your desired currency
    float rate = 3; //in percent
    int time = 2; //in years

    float simple_interest = (principal * rate * time) / 100;

        printf("Principal = $%.f\n", principal);
        printf("Rate = %.f%%\n", rate);
        printf("Time = %d years\n", time);
        printf("\nYour Simple Interest is: %.2f\n", simple_interest);

    return 0;

}