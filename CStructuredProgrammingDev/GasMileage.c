//
// Created by John Tsantilis (A.K.A lumi) on 21/12/2015.
//

#include <stdio.h>

int main (void) {
    unsigned int counter = 0;
    float gallons = 0.0;
    float miles = 0.0;
    float milesPerGallon;
    float average = 0.0;

    printf("%s", "Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);
    while (gallons != -1) {
        printf("%s", "Enter the miles driven: ");
        scanf("%f", &miles);

        milesPerGallon = miles / gallons;

        printf("%s %f", "The miles/gallon for this tank was ", milesPerGallon);
        average = average + milesPerGallon;
        counter++;

        printf("%s", "\n\nEnter the gallons used (-1 to end): ");
        scanf("%f", &gallons);

    }
    if (counter != 0)
        printf("%s %f", "\n\nThe overall average miles/gallon was ", (average / counter));
    else
        printf("%s", "\n\nTough Luck....");

    return 0;

}