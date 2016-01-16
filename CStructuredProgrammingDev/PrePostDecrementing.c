//
// Created by John Tsantilis (A.K.A lumi) on 16/1/2016.
//

#include <stdio.h>

int main (void) {
    int c;
    c = 5;
    printf( "%d\n", c );
    printf( "%d\n", c-- );
    printf( "%d\n\n", c );

    c = 5;
    printf( "%d\n", c );
    printf( "%d\n", --c );
    printf( "%d\n", c );
    return 0;

}
