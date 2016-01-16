//
// Created by John Tsantilis (A.K.A lumi) on 16/1/2016.
//

#include <stdio.h>

int main (void) {
    int outerCounter = 3;
    int innerCounter = 2;

    printf("%s\t%s\t%s\t%s\n", "A", "A+2", "A+4", "A+6");
    while (outerCounter <= 15) {
        printf("%d\t", (outerCounter));
        while (innerCounter <= 6) {
            printf("%d\t", (outerCounter + innerCounter));
            innerCounter += 2;

        }
        printf("\n");
        innerCounter = 2;
        outerCounter += 3;

    }

    return 0;

}