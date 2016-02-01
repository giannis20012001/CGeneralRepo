//
// Created by John Tsantilis (A.K.A lumi) on 1/2/2016.
//

#include <stdio.h>

int main (void) {
    float radius = 0;
    float diameter = 0;
    float circumference = 0;
    float area = 0;
    float pi = 3.14159;

    printf("%s", "Enter Circle radius(-1 to exit): ");
    scanf("%f", &radius);
    while (radius != -1) {
        diameter = 2 * radius;
        circumference = 2 * pi * radius;
        area = pi * (radius * radius);
        printf("%s%f\n", "The circle diameter for the given radius is: ", diameter);
        printf("%s%f\n", "The circle circumference for the given radius is: ", circumference);
        printf("%s%f\n\n", "The circle area for the given radius is: ", area);

        printf("%s", "Enter Circle radius(-1 to exit): ");
        scanf("%f", &radius);

    }

    return 0;

}