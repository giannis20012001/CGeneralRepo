//
// Created by John Tsantilis (A.K.A lumi) on 21/1/2016.
//

#include <stdio.h>

int main (void) {
    int number;
    int flag = 1;
    int numA;
    int numB;
    int numC;
    int numD;
    int numE;
    int decimal = 0;

    printf("%s", "Enter a valid binary number (up to 5 digits): ");
    scanf("%d", &number);
    while (flag != -1) {
        decimal = 0;
        if (number >= 0) {
            if (number <= 11111) {
                numA = number / 10000;
                number = number % 10000;
                numB = number / 1000;
                number = number % 1000;
                numC = number / 100;
                number = number % 100;
                numD = number / 10;
                number = number % 10;
                numE = number;
                if (numA == 1) {
                    decimal = decimal + (numA * 16);
                    flag = -1;

                }
                else if (numA == 0) {
                    decimal = decimal + (numA * 16);
                    flag = -1;

                }
                else {
                    puts("You have not entered a binary number");
                    printf("%s", "Enter a valid binary number (up to 5 digits): ");
                    scanf("%d", &number);
                    flag = 1;

                }

                if (numB == 1) {
                    decimal = decimal + (numB * 8);
                    flag = -1;

                }
                else if (numB == 0) {
                    decimal = decimal + (numB * 8);
                    flag = -1;

                }
                else {
                    puts("You have not entered a binary number");
                    printf("%s", "Enter a valid binary number (up to 5 digits): ");
                    scanf("%d", &number);
                    flag = 1;

                }

                if (numC == 1) {
                    decimal = decimal + (numC * 4);
                    flag = -1;

                }
                else if (numC == 0) {
                    decimal = decimal + (numC * 4);
                    flag = -1;

                }
                else {
                    puts("You have not entered a binary number");
                    printf("%s", "Enter a valid binary number (up to 5 digits): ");
                    scanf("%d", &number);
                    flag = 1;

                }

                if (numD == 1) {
                    decimal = decimal + (numD * 2);
                    flag = -1;

                }
                else if (numD == 0) {
                    decimal = decimal + (numD * 2);
                    flag = -1;

                }
                else {
                    puts("You have not entered a binary number");
                    printf("%s", "Enter a valid binary number (up to 5 digits): ");
                    scanf("%d", &number);
                    flag = 1;

                }

                if (numE == 1) {
                    decimal = decimal + numE ;
                    flag = -1;

                }
                else if (numE == 0) {
                    decimal = decimal + numE;
                    flag = -1;

                }
                else {
                    puts("You have not entered a binary number");
                    printf("%s", "Enter a valid binary number (up to 5 digits): ");
                    scanf("%d", &number);
                    flag = 1;

                }

            }
            else {
                puts("You have not entered a binary number");
                printf("%s", "Enter a valid binary number (up to 5 digits): ");
                scanf("%d", &number);
                flag = 1;

            }

        }
        else {
            puts("You have not entered a binary number");
            printf("%s", "Enter a valid binary number (up to 5 digits): ");
            scanf("%d", &number);
            flag = 1;

        }

    }
    printf("%s%d", "The decimal equivalent is: ", decimal);

    return 0;

}