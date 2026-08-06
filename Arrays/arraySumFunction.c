//* Using functions to compute the sum of all elements of an array inputted by the user

#include <stdio.h>

void display(int sum);

int main() {
    int num;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    int arr[num];

    printf("\nEnter %d elements:\n", num);

    for(int i = 0; i < num; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    display(sum);

    return 0;
}

void display(int sum) {
    printf("\nThe sum of the array elements is: %d\n\n", sum);
}