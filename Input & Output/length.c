#include <stdio.h>

int main() {
    short s = 32000;
    long l = 1234567890;

    printf("Short number: %hd\n", s);
    printf("Long number: %ld\n\n", l);

    long long ll = 123456789012345;
    long double ld = 3.141592653589793238;

    printf("Long long number: %lld\n", ll);
    printf("Long double: %.15Lf\n", ld);

    return 0;
}