//* Sorting Temperature Conversions in 3 Sorting Algorithms

#include <stdio.h>

void bubbleSort(float fahrenheit[], int tempNum);
void insertionSort(float fahrenheit[], int tempNum);
void selectionSort(float fahrenheit[], int tempNum);
void printTemp(float fahrenheit[], int tempNum);

int main() {

    int tempNum;
    float celsius[100];
    float fahrenheit[100];

    printf("Enter the number of temperatures: ");
    scanf("%d", &tempNum);
    
    printf("Enter %d temperatures in Celsius: ", tempNum);
    for (int i = 0; i < tempNum; i++) {
        scanf("%f", &celsius[i]);

        float conversion = 0.0f;
        conversion += (celsius[i] * 9 / 5) + 32;
        fahrenheit[i] = conversion;
    }

    float bubbleList[100];
    for (int i = 0; i < tempNum; i++) {
        bubbleList[i] = fahrenheit[i];
    }
    bubbleSort(bubbleList, tempNum);
    printf("Sorted temperatures using Bubble Sort: ");
    printTemp(bubbleList, tempNum);

    float insertionList[100];
    for (int i = 0; i < tempNum; i++) {
        insertionList[i] = fahrenheit[i];
    }
    insertionSort(insertionList, tempNum);
    printf("Sorted temperatures using Insertion Sort: ");
    printTemp(insertionList, tempNum);

    float selectionList[100];
    for (int i = 0; i < tempNum; i++) {
        selectionList[i] = fahrenheit[i];
    }
    selectionSort(selectionList, tempNum);
    printf("Sorted temperatures using Selection Sort: ");
    printTemp(selectionList, tempNum);

    return 0;
}

void bubbleSort(float fahrenheit[], int tempNum) {
    for (int i = 0; i < tempNum - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < tempNum - i - 1; j++) {
            if (fahrenheit[j] > fahrenheit[j + 1]) {
                float temp = fahrenheit[j];
                fahrenheit[j] = fahrenheit[j + 1];
                fahrenheit[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

void insertionSort(float fahrenheit[], int tempNum) {
    for (int i = 1; i < tempNum; i++) {
        float current = fahrenheit[i];
        int j = i - 1;

        while (j >= 0 && fahrenheit[j] > current) {
            fahrenheit[j + 1] = fahrenheit[j];
            j--;
        }
        fahrenheit[j + 1] = current;
    }
}

void selectionSort(float fahrenheit[], int tempNum) {
    for (int i = 0; i < tempNum - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tempNum; j++) {
            if (fahrenheit[j] < fahrenheit[minIndex]) {
                minIndex = j;
            }
        }
        float temp = fahrenheit[i];
        fahrenheit[i] = fahrenheit[minIndex];
        fahrenheit[minIndex] = temp;
    }
}

void printTemp(float fahrenheit[], int tempNum) {
    for (int i = 0; i < tempNum; i++) {
        printf("%.2f ", fahrenheit[i]);
    }
    printf("\n");
}