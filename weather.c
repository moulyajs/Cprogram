#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

int main()
{
    // initialize rainfall data for 2011 - 2015
    float rain[YEARS][MONTHS] =
        {
            {1.2, 4.7, 5.6, 8.9, 2.5, 6.0, 7.5, 3.5, 6.2, 1.0, 6.2, 4.3},
            {5.3, 8.3, 2.7, 5.0, 4.5, 3.5, 7.3, 2.5, 6.0, 3.5, 4.6, 3.4},
            {3.4, 5.6, 4.6, 3.6, 3.4, 6.3, 4.5, 3.5, 2.0, 5.4, 3.7, 3.4},
            {4.5, 4.3, 6.8, 3.8, 9.0, 5.3, 2.9, 4.7, 1.5, 6.7, 4.5, 6.4},
            {3.4, 5.6, 3.4, 5.7, 1.5, 7.5, 7.8, 4.5, 3.5, 8.5, 3.6, 2.5}};
    int year, month;
    float subtot, total;
    printf("YEAR\t\tRAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }
        printf("%5d \t%15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("the yearly average is %.1f inches \n\n", total / YEARS);

    printf("MONTHLY AVERAGE \n\n ");
    printf("jan  feb  mar  apr  may  jun  jul  aug  sept  oct  nov  dec\n");
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];
        printf("%4.1f ", subtot / YEARS);
    }
    printf("\n");
    return 0;
}