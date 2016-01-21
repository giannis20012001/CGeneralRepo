//
// Created by John Tsantilis (A.K.A lumi) on 21/1/2016.
//

#include <stdio.h>

int main (void) {
    int counter = 1;

    while (counter <= 100) {
        printf("%s", "*");
        if ((counter % 10) == 0) {
            puts("");

        }
        counter++;

    }

    return 0;

}