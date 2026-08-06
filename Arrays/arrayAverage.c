//* Computing the average of all the elements of an array inputted by the user

#include <stdio.h>

int main() {

    int n;
    float sum = 0.0f, average;
    int array[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("\nEnter elements\n");

    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = sum / n;

    printf("\nThe average of %d numbers is %.2f\n", n, average);

    return 0;
}