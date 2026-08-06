//* Using functions to calculate total sales for 7 days and display the performance

#include <stdio.h>

float calculateTotalSales(float dailySales[7]);
void displayPerformance(float totalSales);

int main() {

    float dailySales[7];
    float totalSales;

    printf("Enter the sales for 7 days:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &dailySales[i]);
    }

    printf("\n");

    totalSales = calculateTotalSales(dailySales);

    printf("Total Sales: %.2f\n", totalSales);

    displayPerformance(totalSales);

    return 0;
}

float calculateTotalSales(float dailySales[7]) {
    float sum = 0.0f;

    for (int i = 0; i < 7; i++) {
        sum += dailySales[i];
    }

    return sum;
}

void displayPerformance(float totalSales) {
    if (totalSales > 50000) {
        printf("Performace: Excellent Performance");
    } else if (totalSales >= 20000 && totalSales <= 50000) {
        printf("Performance: Good Performance");
    } else {
        printf("Performance: Needs Improvement");
    }
}