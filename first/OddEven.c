//
// Created by John Tsantilis (A.K.A lumi) on 18/12/2015.
//

#include <stdio.h>

int main () {
    int integerA = 0;

    printf("%s", "Give the First integer: ");
    scanf("%d", &integerA);

    if ((integerA % 2) == 0)
        puts("Number is Even");

    if ((integerA % 2) != 0)
        puts("Number is Odd");

    return 0;

}