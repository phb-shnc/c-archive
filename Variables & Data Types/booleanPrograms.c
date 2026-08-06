//* Collection of Boolean Programs

#include <stdbool.h>
#include <stdio.h>

//importing header file for length counting
#include <string.h>

int main() {

    /*Even or Odd Checker (Boolean Only)
    n % 2 == 0 gives 1 if even, 0 if odd.
    Print the result directly.*/

    /*The expression n % 2 == 0 is a common method to determine if an integer n is even or odd, and it directly produces a boolean result
    n % 2 calculates the remainder when n is divided by 2
    If n is an even number, it is perfectly divisible by 2, leaving a remainder of 0
    If n is an odd number, dividing it by 2 will always leave a remainder of 1
    Equality Comparison (== 0): The result of n % 2 is then compared to 0 using the equality operator ==
    If n % 2 is 0 (meaning n is even), the comparison 0 == 0 evaluates to true
    If n % 2 is 1 (meaning n is odd), the comparison 1 == 0 evaluates to false
    Boolean Output:
    The expression n % 2 == 0 directly yields a boolean value: true if n is even and false if n is odd*/

    int n = 3;

        printf("%d is even if 1, odd if 0:\n%d\n", n, n % 2 == 0);


    /*Positive or Negative Test
    n > 0 will print 1 if positive, 0 if negative or zero.*/

    int p = -1;

        printf("%d is positive if 1, negative if 0:\n%d\n", p, p > 0);


    /*Age Restriction Check
    Example: age >= 18 prints 1 if true, 0 if false.*/

    int age = 1;

        printf("%d is of legal age if 1, minor if 0:\n%d\n", age, age >= 18);


    /*Password Length Check
    Suppose password length = 8.
    len >= 8 prints 1 if long enough, 0 otherwise.*/

    //the program idea seems unreasonable
    //so i made it make sense

    //used new syntax w/ size_t & strlen
    char password[] = "phoebe";
    size_t length = strlen(password);

        printf("%s is a valid password if 1, invalid if 0: \n%zu\n",password, length >= 8);


    /*Range Check
    Check if a number is between two values.
    Example: n >= 1 && n <= 10.*/

    int b = 13;

        printf("%d is in between 1 and 10 is 1, 0 if not:\n%d\n", b, b >= 1 && b <= 10);

    return 0;

}