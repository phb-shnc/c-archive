// This is a comment

#include <stdio.h>

int main() {


// This is a variable declaration
int num;

printf("Enter a number: ");
scanf("%d", &num);

printf("Your number is %d", num);

if (num > 0) { printf("%d is a positive number.\n", num); }
else if (num < 0) { printf("%d is a negative number.\n", num); }
else { printf("The number is 0.\n"); }

/* This
is
a
multiline
comment */

return 0;

}
