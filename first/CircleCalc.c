//
// Created by John Tsantilis (A.K.A lumi) on 18/12/2015.
//

#include <stdio.h>

int main () {
    int radius = 0;

    printf("%s", "Give the Circle radius: ");
    scanf("%d", &radius);

    printf("%s %d \n", "Diameter: ", (radius * 2)); // 2R
    printf("%s %f \n", "Circumference: ", (2 * 3.14159 * radius)); //2piR
    printf("%s %f \n", "Area: ", (3.14159 * (radius * radius))); //piR^2

    return 0;

}