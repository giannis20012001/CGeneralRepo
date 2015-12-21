//
// Created by John Tsantilis (A.K.A lumi) on 21/12/2015.
//

#include <stdio.h>

int main (void) {
    unsigned int counter = 0;
    int accountNumber = 0;
    float beginningBalance = 0.0;
    float totalCharges = 0.0;
    float totalCredits = 0.0;
    float creditLimit = 0.0;

    printf("%s", "Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);
    while (accountNumber != -1) {
        printf("%s", "Enter beginning balance: ");
        scanf("%f", &beginningBalance);
        printf("%s", "Enter total charges: ");
        scanf("%f", &totalCharges);
        printf("%s", "Enter total credits: ");
        scanf("%f", &totalCredits);
        printf("%s", "Enter credit limit: ");
        scanf("%f", &creditLimit);

        printf("%s", "Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

    }
    if (counter != 0)
        printf("%s %f", "\n\nThe overall average miles/gallon was ", (average / counter));
    else
        printf("%s", "\n\nTough Luck....");

    return 0;

}