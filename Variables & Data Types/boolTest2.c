#include <stdio.h>

//* Boolean Values with #define
#define FALSE 0
#define TRUE 1

int main() {

    /*
    //* Using enum to Implement Boolean Type
    enum bool {false, true};
    enum bool x = true;
    enum bool y = false;

    printf("%d\n", x);
    printf("%d\n", y);
    */

    /*
    //* typedef enum as BOOL
    typedef enum {false, true} BOOL;

    BOOL x2 = true;
    BOOL y2 = false;

    printf("%d\n", x2);
    printf("%d\n", y2);
    
    // Use enumerated constants in the decision-making or loop statements
    
    int i = 0;

    while(true) {
        i++;
        printf("%d\n", i);

        if (i >= 5)
            break;
    }
    */
    
    printf("False: %d\nTrue: %d\n", FALSE, TRUE);

    return 0;
}