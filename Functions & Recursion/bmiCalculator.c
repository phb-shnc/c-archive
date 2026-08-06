//* BMI Calculator with Classification

#include <stdio.h>

float calculateBMI(float weight, float height);

int main() {

    float weight;
    float height;
    float BMI;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    BMI = calculateBMI(weight, height);

    printf("Your BMI is: %.2f\n", BMI);

    printf("Classification: ");
    if (BMI < 18.5f) {
        printf("Underweight\n");
    } else if (BMI >= 18.5f && BMI <= 24.9f) {
        printf("Health or Normal weight\n");
    } else if (BMI >= 25.0f && BMI <= 29.9f) {
        printf("Overweight\n");
    } else {
        printf("Obesity\n");
    }

    return 0;
}

float calculateBMI(float weight, float height) {
    return weight / (height * height);
}