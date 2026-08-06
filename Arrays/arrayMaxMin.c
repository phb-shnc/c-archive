//* Finding the maximum and minimum value of a hard-coded array using functions

#include <stdio.h>

int findMinimum(int arr[], int size);
int findMaximum(int arr[], int size);

int main() {

    int numbers[] = {45, 22, 89, 33, 77, 55};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int min = findMinimum(numbers, size);
    int max = findMaximum(numbers, size);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

int findMinimum(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int findMaximum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}