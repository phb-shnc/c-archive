//* More optimized code

#include <stdio.h>

int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]); // 28 / 4 = 7

    //* Bubble Sort
    for (int i = 0; i < size - 1; i++) { // 7 - 1 = index[6]
        int swapped = 0; // Flag is false
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Set swapped flag to true
            }
        }
        // If no swaps are made in this pass, array is already sorted
        if (swapped == 0) {
            break;
        }
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}