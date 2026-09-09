#include <stdio.h>

int main() {
    int x = 10, y = 20;

    //* Pointer to constant integer
    const int *ptr = &x;
    printf("Value pointed by ptr: %d\n", *ptr);

    // .*ptr = 15; // Not allowed (cannot change value through ptr)
    ptr = &y; // allowed (pointer can point to another variable)
    printf("Value pointed by ptr: %d\n\n", *ptr);

    int arr[] = {1, 2, 3};

    //* Pointer to constant integer (array base address)
    const int *ptr2 = arr;
    printf("First element: %d\n", *ptr2);

    // .*ptr2 = 5; // not allowed (cannot change array element via ptr2)
    ptr2++;
    printf("Second element: %d\n\n", *ptr2);

    int i = 10;
    int j = 20;

    /* constant pointer to integer */
    int* const ptr3 = &i;
    printf("ptr3: %d\n", *ptr3);

    *ptr3 = 100; // change the pointer value
    printf("ptr3: %d\n", *ptr3);
    // ptr3 = &j; // pointer cannot point to another variable

    /*
    int i2 = 10;
    int j2 = 20;

    // constant pointer to constant integer 
    const int* const ptr4 = &i2;
    printf("ptr4: %d\n", *ptr4);

    ptr4 = &j2; // error
    .*ptr4 = 50; // error
    */

    return 0;
}