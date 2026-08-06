//* Currency Converter - using various data types

#include <stdio.h>

int main () {

    /*Currency Converter
    Use double for accurate conversion (like PHP → USD).*/

    //int peso = 4563;
    //float dollar = (float) peso * 0.018;

    int dollar = 90;
    float peso = (float) dollar * 57.12;

        //printf("Peso to Dollar value of %d is %.2f", peso, dollar);
        printf("Dollar to Peso value of %d is %.2f", dollar, peso);

    return 0;

}