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

    printf("%s", "Enter a 5 digit number: ");
    scanf("%d", &number);
    while (flag != -1) {
        if (number > 10000) {
            if (number < 99999) {
                numA = number / 10000;
                number = number % 10000;
                numB = number / 1000;
                number = number % 1000;
                number = number % 100;
                numC = number / 10;
                numD = number % 10;
                if (numA == numD) {
                    if (numB == numC) {
                        puts("The given number is a palindrome!!!");

                    }
                    else
                        puts("Not a palindrome!!!");

                }
                else
                    puts("Not a palindrome!!!");

                flag = -1;

            }
            else {
                puts("You did not provide a 5 digit number!!!");
                printf("%s", "Enter a 5 digit number: ");
                scanf("%d", &number);

            }

        }
        else {
            puts("You did not provide a 5 digit number!!!");
            printf("%s", "Enter a 5 digit number: ");
            scanf("%d", &number);

        }

    }

    return 0;

}