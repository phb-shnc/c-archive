#include <stdio.h>

int main() {

    int arr[] = {12, 45, 78, 23, 56, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 56;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}