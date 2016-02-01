//
// Created by John Tsantilis (A.K.A lumi) on 1/2/2016.
//

#include <stdio.h>

int main (void) {
    int firstSide;
    int secondSide;
    int thirdSide;

    printf("%s", "Enter first side(0 to exit): ");
    scanf("%d", &firstSide);
    while (firstSide != 0) {
        printf("%s", "Enter second sie: ");
        scanf("%d", &secondSide);
        printf("%s", "Enter third sie: ");
        scanf("%d", &thirdSide);
        if (firstSide < 0) {
            puts("You have provided a negative side!!!");
            puts("Please provide a new number!!!");

        }
        else if (secondSide < 0) {
            puts("You have provided a negative side!!!");
            puts("Please provide a new number!!!");

        }
        else if (thirdSide < 0) {
            puts("You have provided a negative side!!!");
            puts("Please provide a new number!!!");

        }
        else {
            if ((thirdSide * thirdSide) == ((firstSide * firstSide) + (secondSide * secondSide))) {
                puts("The given sides can represent a right triangle!!!");

            }
            else {
                puts("The given sides can not represent a right triangle!!!");

            }

        }
        printf("\n%s", "Enter first side(0 to exit): ");
        scanf("%d", &firstSide);

    }

    return 0;

}