//* Internal and External Linkages

#include <stdio.h>
//#include "itemsLinkage.c"

// tells the compiler that the variable
// have external linkage
extern int items;

int main() {
    printf("total item is: %d\n", items);

    return 0;
}