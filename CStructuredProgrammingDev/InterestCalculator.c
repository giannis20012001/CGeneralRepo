//
// Created by John Tsantilis (A.K.A lumi) on 15/1/2016.
//

#include <stdio.h>

int main (void) {
    int term = 0;
    float rate = 0;
    float principal = 0;
    float interest = 0;

    printf("%s", "Enter loan principal (-1 to end): ");
    scanf("%f", &principal);
    while (principal != -1) {
        printf("%s", "Enter interest rate: ");
        scanf("%f", &rate);
        printf("%s", "Enter term of the loan in days: ");
        scanf("%d", &term);

        interest = principal * rate * ((float)term/365);
        printf("%s %0.2f\n\n", "The interest charge is $", interest);

        printf("%s", "Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

    }

    return 0;

}