#include <stdio.h>

int main() {
    int num = 2314;

    printf("Without flag: |%5d|\n", num);
    printf("With left-justify: |%-5d|\n\n", num);

    int pos = 1423;
    int neg = -1423;

    printf("Without flag: %d, %d\n", pos, neg);
    printf("With plus flag: %+d, %+d\n\n", pos, neg);

    int num2 = 14;

    printf("Without flag: |%7d|\n", num);
    printf("With zero padding: |%07d|\n\n", num);

    int pos2 = 23;
    int neg2 = -23;

    printf("Without space: |%d| |%d|\n", pos, neg);
    printf("With space flag: |% d| |% d|\n\n", pos, neg);

    int num3 = 2314;

    printf("Octal without #: %o\n", num);
    printf("Octal with #: %#o\n", num);
    printf("Hex lowercase without #: %x\n", num);
    printf("Hex lowercase with #: %#x\n", num);
    printf("Hex uppercase without #: %X\n", num);
    printf("Hex uppercase with #: %#X\n\n", num);

    return 0;
}