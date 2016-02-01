//
// Created by John Tsantilis (A.K.A lumi) on 1/2/2016.
//

#include <stdio.h>

int main (void) {
    int number;
    int counter = 1;
    int factorial = 1;

    printf("%s", "Enter number(-1 to exit): ");
    scanf("%d", &number);
    while (number >= 0) {
        if (number == 0) {
            factorial = 1;

        }
        else if (number > 0) {
            while (counter < number) {
                factorial = factorial * (number - counter);
                printf("%s%d\n", "number: ", number);
                printf("%s%d\n", "counter: ", counter);
                printf("%s%d\n", "factorial: ", factorial);
                puts("");
                counter++;

            }

        }
        printf("%s%d\n\n", "The factorial is: ", factorial);

        printf("%s", "Enter number(-1 to exit): ");
        scanf("%d", &number);

    }

    return 0;

}