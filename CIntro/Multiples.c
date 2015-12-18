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

    if ((integerB % integerA) == 0)
        puts("The first integer is a multiple of the second");

    if ((integerB % integerA) != 0)
        puts("The first integer is not a multiple of the second");

    return 0;

}