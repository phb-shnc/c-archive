//* BMI Calculator (2)

#include <stdio.h>

double calculateBMI(double weight, double height);
void printBMI(double weight, double height);

int main() {

    //* without function

    double weight, height;

    printf("Enter weight in kilograms: ");
    scanf("%lf", &weight);
    printf("Enter height in meters: ");
    scanf("%lf", &height);

    double bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    //* with function return type

    printf("Enter weight in kilograms: ");
    scanf("%lf", &weight);
    printf("Enter height in meters: ");
    scanf("%lf", &height);

    double bmi2 = calculateBMI(weight, height);
    printf("Your BMI is: %.2f\n", bmi);

    //* with function void type

    printf("Enter weight in kilograms: ");
    scanf("%lf", &weight);
    printf("Enter height in meters: ");
    scanf("%lf", &height);

    printBMI(weight, height);

    return 0;
}

double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

void printBMI(double weight, double height) {
    double bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
}