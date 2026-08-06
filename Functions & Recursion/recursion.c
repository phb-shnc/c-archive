/*
* Using functions and recursion to find a specific element in a hard-coded array
* and find the GCD of 2 integers
*/

#include <stdio.h>

int binarySearch(int arr[], int lower, int upper, int search);
int findGCD(int num1, int num2);

int main() {

    int arr[] = {10, 12, 23, 45, 56, 78, 91, 101};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search;
    int num1, num2;

    printf("\nEnter the search element: ");
    scanf("%d", &search);

    int result1 = binarySearch(arr, 0, size - 1, search);
    if (result1 != -1) {
        printf("Element %d is found at index %d\n\n", search, result1);
    } else {
        printf("Element %d not found in the array\n\n", search);

    }

    printf("Enter two integers: \n");
    scanf("%d\n", &num1);
    scanf("%d", &num2);

    int result2 = findGCD(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, result2);

    return 0;
}

int binarySearch(int arr[], int lower, int upper, int search) {
    if (lower > upper) {
        return -1;
    }

    int mid = lower + (upper - lower) / 2;

    if (arr[mid] == search) {
        return mid;
    } else if (arr[mid] > search) {
        return binarySearch(arr, lower, mid - 1, search);
    } else {
        return binarySearch(arr, mid + 1, upper, search);
    }
}

int findGCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return findGCD(num2, num1 % num2);
    }
}