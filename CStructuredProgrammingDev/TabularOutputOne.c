//
// Created by John Tsantilis (A.K.A lumi) on 16/1/2016.
//

#include <stdio.h>

int main (void) {
    int counter = 0;

    printf("%s\t%s\t%s\t%s\n", "N", "10*N", "100*N", "1000*N");
    while (counter < 10) {
        printf("%d\t", (counter + 1));
        printf("%d\t\t", ((counter + 1) * 10));

        if (counter < 9)
            printf("%d\t\t", ((counter + 1) * 100));
        else
            printf("%d\t", ((counter + 1) * 100));

        printf("%d\n", ((counter + 1) * 1000));
        counter++;

    }

    return 0;

}