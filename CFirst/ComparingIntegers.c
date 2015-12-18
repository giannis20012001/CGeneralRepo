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

    if (integerA > integerB)
        puts("The First integer is larger");

    if (integerB > integerA)
        puts("The Second integer is larger");

    if (integerA == integerB)
        puts("The two integers are equals");

    return 0;

}