//
// Created by John Tsantilis (A.K.A lumi) on 18/12/2015.
//

#include <stdio.h>

int main () {
    int integerA = 0;
    int integerB = 0;

    puts("Input two integers");
    printf("%s", "Give the First integer: ");
    scanf("%d", &integerA);
    printf("%s", "Give the Second integer: ");
    scanf("%d", &integerB);

    printf("%s %d \n", "sum: ", (integerA + integerB));
    printf("%s %d \n", "product: ", (integerA * integerB));
    printf("%s %d \n", "difference: ", (integerA - integerB));
    printf("%s %d \n", "quotient: ", (integerA / integerB));
    printf("%s %d \n", "remainder: ", (integerA % integerB));

    return 0;

}