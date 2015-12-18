//
// Created by John Tsantilis (A.K.A lumi) on 18/12/2015.
//

#include <stdio.h>

int main () {
    int integerA = 0;
    int integerB = 0;
    int integerC = 0;
    int min = 0;
    int max = 0;

    printf("%s", "Enter three different integers: ");
    scanf("%d %d %d", &integerA, &integerB, &integerC);
    puts("");

    max = integerA;
    if (integerB > max) {
        max = integerB;
        if (integerC > max) {
            max = integerC;

        }

    }

    if (integerC > max) {
        max = integerC;
        if (integerB > max) {
            max = integerB;

        }

    }

    min = integerA;
    if (integerB < min) {
        min = integerB;
        if (integerC < min) {
            min = integerC;

        }

    }

    if (integerC < min) {
        min = integerC;
        if (integerB < min) {
            min = integerB;

        }

    }

    printf("%s %d \n", "Smallest is: ", min);
    printf("%s %d \n", "Largest is: ", max);

    return 0;

}