//
// Created by John Tsantilis (A.K.A lumi) on 20/1/2016.
//

#include <stdio.h>

int main(void) {
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result = 0;
    int flag = -1;

    while (student <= 10) {
        printf("%s", "Enter result ( 1=pass,2=fail ): ");
        scanf("%d", &result);
        while (flag != 1) {
            if (result == 1) {
                passes = passes + 1;
                flag = 1;

            }
            else if (result == 2) {
                failures = failures + 1;
                flag = 1;

            }

            else {
                flag = -1;
                printf("%s\n", "You did not enter n accepted input!!!Please try again!!! ");
                printf("%s", "Enter result ( 1=pass,2=fail ): ");
                scanf("%d", &result);

            }

        }
        student = student + 1;
        flag = -1;

    }
    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);
    if (passes > 8) {
        puts("Bonus to instructor!");

    }
    return 0;

}