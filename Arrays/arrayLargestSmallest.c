//* Finding the largest and smallest element of a hard-coded array

#include <stdio.h>

int main() {

    int numbers[8] = {15, 22, -5, -30, 42, 55, 8, -12};

    int largest = numbers[0];
    int smallest = numbers[0];

    for(int i = 0; i < 8; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}