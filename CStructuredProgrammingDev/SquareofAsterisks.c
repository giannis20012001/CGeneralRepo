//
// Created by John Tsantilis (A.K.A lumi) on 20/1/2016.
//

#include <stdio.h>

int main(void) {
    int side = 0;
    int flag = 1;
    unsigned int internalCounter = 1;
    unsigned int externalCounter = 1;

    printf("%s", "Enter the square's side(1-20): ");
    scanf("%d", &side);
    while (flag != -1) {
        if (side >= 1) {
            if (side <= 20) {
                while (externalCounter <= side) {
                    while (internalCounter <= side ) {
                        printf("%s", "*");
                        internalCounter++;

                    }
                    printf("\n");
                    externalCounter++;
                    internalCounter = 1;

                }
                flag = -1;

            }
            else {
                printf("%s\n", "You have enter a side that is out of bounds!!! Please re-enter!!!!");
                printf("%s", "Enter the square's side(1-20): ");
                scanf("%d", &side);
                flag = 1;

            }

        }
        else {
            printf("%s\n", "You have enter a side that is out of bounds!!! Please re-enter!!!!");
            printf("%s", "Enter the square's side(1-20): ");
            scanf("%d", &side);
            flag = 1;

        }

    }

    return 0;

}