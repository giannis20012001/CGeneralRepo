//
// Created by John Tsantilis (A.K.A lumi) on 18/12/2015.
//

#include <stdio.h>

int main () {
    int integer = 0;

    printf("%s", "Give a five digits integer: ");
    scanf("%d", &integer);

    puts("The number is:");
    printf("%d   ", (integer / 10000));
    integer = integer % 10000;

    printf("%d   ", (integer / 1000));
    integer = integer % 1000;

    printf("%d   ", (integer / 100));
    integer = integer % 100;

    printf("%d   ", (integer / 10));
    integer = integer % 10;

    printf("%d   ", integer);


    return 0;

}