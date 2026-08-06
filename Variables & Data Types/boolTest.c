//* Collection of Boolean Tests

//import boolean header file
#include <stdbool.h>

#include <stdio.h>

int main() {

    int a = 1;
    int b = 11;

    //declare boolean with bool keyword
    bool amI_Cute = true;
    bool amI_notCute = false;

        //return boolean variables
        printf("%d\n", amI_Cute);
        printf("%d\n", amI_notCute);

        printf("%d\n", 10 == 5);
        printf("%d\n", 10 > 5);
        printf("%d\n", 10 < 5);
        printf("%d\n", 10 >= 5);
        printf("%d\n", 10 <= 5);
        printf("%d\n", 10 != 5);

        printf("%d\n", a > b);

        printf("%d\n", amI_Cute == amI_notCute);

        printf("%d\n", b >= 1 && b <= 10);
        printf("%d\n", b >= 1 || b <= 10);
        printf("%d\n", !(b >= 1 && b <= 10));
        printf("%d\n", !(b >= 1 || b <= 10));

    return 0;

}