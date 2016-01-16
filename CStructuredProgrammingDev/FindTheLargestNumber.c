//
// Created by John Tsantilis (A.K.A lumi) on 16/1/2016.
//

#include <stdio.h>

int main (void) {
    int counter = 0;
    int winner = -1;
    float number = 0;
    float largest = -1;

    while (counter < 10) {
        if (counter == 0) {
            printf("%s%d%s", "Enter the ", counter + 1, "st salesperson's number: ");
            scanf("%f", &number);

        }
        else if (counter == 1) {
            printf("%s %d %s", "Enter the ", counter + 1, "nd salesperson's number: ");
            scanf("%f", &number);

        }
        else if (counter == 2) {
            printf("%s %d %s", "Enter the ", counter + 1, "rd salesperson's number: ");
            scanf("%f", &number);

        }
        else {
            printf("%s %d %s", "Enter the ", counter + 1, "th salesperson's number: ");
            scanf("%f", &number);

        }

        if (number >= largest){
            largest = number;


        }

        counter++;

    }

    printf("%s %0.2f", "The winner is: ", largest);

    return 0;

}