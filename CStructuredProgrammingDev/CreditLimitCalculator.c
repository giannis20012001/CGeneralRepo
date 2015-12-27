//
// Created by John Tsantilis (A.K.A lumi) on 21/12/2015.
//

#include <stdio.h>

int main (void) {
    int accountNumber = 0;
    float beginningBalance = 0.0;
    float finalBalance;
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

        finalBalance = (beginningBalance + totalCharges) - totalCredits;

        if (finalBalance > creditLimit) {
            printf("%s %d\n", "Account:      ", accountNumber);
            printf("%s %0.2f\n", "Credit limit: ", creditLimit);
            printf("%s %0.2f\n", "Balance:      ", finalBalance);
            printf("%s\n\n", "Credit Limit Exceeded.\n");
        }


        printf("\n\n%s", "Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

    }

    return 0;

}