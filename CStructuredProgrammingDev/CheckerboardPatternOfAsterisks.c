//
// Created by John Tsantilis (A.K.A lumi) on 21/1/2016.
//

#include <stdio.h>

int main (void) {
    int externalCounter = 1;
    int internalCounter = 1;

    while (externalCounter <= 8) {
        if (externalCounter % 2 == 0) {
            printf("%s", " ");

        }
        while (internalCounter <= 8) {
            printf("%s", "* ");
            internalCounter++;

        }
        puts("");
        externalCounter++;
        internalCounter = 1;

    }

    return 0;

}
