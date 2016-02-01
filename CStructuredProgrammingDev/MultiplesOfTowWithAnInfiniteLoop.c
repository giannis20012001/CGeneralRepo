//
// Created by John Tsantilis (A.K.A lumi) on 1/2/2016.
//

#include <stdio.h>

int main (void) {
    int counter = 1;

    while (counter > -1) {
        if ((counter % 2) == 0) {
            printf("%d \n", counter);

        }
        if ((counter % 10) == 0) {
            puts("");

        }
        counter++;

    }

    return 0;

}