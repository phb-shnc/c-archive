//* Computing the sum of all elements of an array inputted by the user

#include <stdio.h>

int main() {

    int n, sum = 0;
    int array[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("\nEnter elements\n");

    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("\nThe sum of %d numbers is %d\n", n, sum);

    return 0;
}