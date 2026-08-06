//* Bill Splitter

#include <stdio.h>

int main () {

    /*Bill Splitter
    Store total bill and number of friends.
    Calculate how much each person pays.*/

    int totalBill = 4000;
    int totalFriends = 4;

    float to_pay = totalBill / totalFriends;

        printf("%.2f", to_pay);

    return 0;
}