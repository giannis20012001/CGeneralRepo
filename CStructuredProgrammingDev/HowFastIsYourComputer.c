//
// Created by John Tsantilis (A.K.A lumi) on 21/1/2016.
//

#include <stdio.h>

int main (void) {
    int counter = 1;

    while (counter <= 1000000000) {
        counter++;
        if ((counter % 100000000) == 0) {
            printf("%s%d\n", "The counter is: ", counter);

        }

    }
    puts("Finished adding!!!");

    return 0;

}