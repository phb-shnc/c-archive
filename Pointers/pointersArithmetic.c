//* Pointers Arithmetic (without and with pointers)
// without using pointers (woP)

/* Uses arr[i] to access the elements
Same as *(arr + i) but is easier to read and understand*/

// using pointers (uP)

/* Uses *(arr + i) to access the elements
the pointer moves through memory addresses of the array*/

#include <stdio.h>

int woPFindSum();
float woPFindAverage();

int uPFindSum();
float uPFindAverage();

int main() {

    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    // without pointers
    int sum = woPFindSum(arr, size);
    float avg = woPFindAverage(arr, size);

    printf("Without Pointers:\n");
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    // using pointers
    int sum2 = uPFindSum(arr, size);
    float avg2 = uPFindAverage(arr, size);

    printf("With Pointers:\n");
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

int woPFindSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float woPFindAverage(int arr[], int size) {
    int sum = woPFindSum(arr, size);
    return (float) sum / size;
}

int uPFindSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

float uPFindAverage(int *arr, int size) {
    int sum = uPFindSum(arr, size);
    return (float) sum / size;
}