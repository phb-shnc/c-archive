#include <stdio.h>

int main() {

    int arr[] = {12, 23, 45, 56, 78, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 56;

    int lower = 0;
    int upper = size - 1;
    int result = -1;

    while (lower <= upper) {
        int mid = lower + (upper - lower) / 2;
        if (arr[mid] == search) {
            result = mid;
            break;
        } else if (arr[mid] < search) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
    }

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}