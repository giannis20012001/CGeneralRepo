//
// Created by John Tsantilis (A.K.A lumi) on 21/1/2016.
//

#include <stdio.h>

int main(void) {
    int number;
    int flag = 1;
    int numA;
    int numB;
    int numC;
    int numD;
    int numE;
    int counter = 0;

    printf("%s", "Enter a valid number (up to 5 digits): ");
    scanf("%d", &number);
    while (flag != -1) {
        if (number >= 0) {
            if (number <= 99999) {
                numA = number / 10000;
                number = number % 10000;
                numB = number / 1000;
                number = number % 1000;
                numC = number / 100;
                number = number % 100;
                numD = number / 10;
                number = number % 10;
                numE = number;

                if (numA == 7) {
                    counter++;

                }
                if (numB == 7) {
                    counter++;

                }
                if (numC == 7) {
                    counter++;

                }
                if (numD == 7) {
                    counter++;

                }
                if (numE == 7) {
                    counter++;

                }
                flag = -1;

            }
            else {
                puts("You have not entered a valid number");
                printf("%s", "Enter a valid number (up to 5 digits): ");
                scanf("%d", &number);
                flag = 1;

            }

        }
        else {
            puts("You have not entered a valid number");
            printf("%s", "Enter a valid number (up to 5 digits): ");
            scanf("%d", &number);
            flag = 1;

        }

    }

    if (counter > 0) {
        printf("%s%d", "The sevens found are: ", counter);

    }
    else {
        printf("%s", "No sevens where found!!!");

    }

    return 0;

}