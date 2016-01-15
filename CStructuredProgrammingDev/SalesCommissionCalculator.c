//
// Created by John Tsantilis (A.K.A lumi) on 7/1/2016.
//

#include <stdio.h>

int main (void) {
    int baseSalary = 200;
    float sales = 0;
    float totalSalary = 0;
    float commission = 0.09;

    printf("%s", "Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);
    while (sales != -1) {
        totalSalary = baseSalary + (sales * commission);
        printf("%s %0.2f\n\n", "Salary is: $", totalSalary);

        printf("%s", "Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);

    }
    return 0;

}

