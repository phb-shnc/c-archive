#include <stdio.h>

int main() {

    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    //* Insertion Sort
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int j = i - 1;

        // Move elements of arr(0..i - 1) that are greater than
        // one position ahead of their current position
            while (j >= 0 && arr[j] > current) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = current;
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}