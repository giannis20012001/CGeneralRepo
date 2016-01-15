//
// Created by John Tsantilis (A.K.A lumi) on 15/1/2016.
//

#include <stdio.h>

int main (void) {
    int workHours = 0;
    float hourlyRate = 0;
    float total = 0;

    printf("%s", "Enter # of hours worked (-1 to end): ");
    scanf("%d", &workHours);
    while (workHours != -1) {
        printf("%s", "Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourlyRate);

        if (workHours > 40) {
            total = ((float)40 * hourlyRate) + ((float)(workHours - 40) * (hourlyRate + (hourlyRate / 2)));

        }
        else {
            total = (float)workHours * hourlyRate;

        }
        printf("%s %0.2f\n\n", "Salary is $", total);

        printf("%s", "Enter # of hours worked (-1 to end): ");
        scanf("%d", &workHours);

    }
    return 0;

}
