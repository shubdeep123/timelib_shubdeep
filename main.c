#include <stdio.h>
#include <stdlib.h>
#include "tsete.h"
#include "Logik.h"

int main()
{
    struct Date datum1;
    int checker = 1;

    printf("Gebe den Tag ein!:\n");
    scanf("%i", &datum1.day);
    printf("Gebe den Monat ein!:\n");
    scanf("%i", &datum1.month);
    printf("Gebe das Jahr ein!:\n");
    scanf("%i", &datum1.year);

    printf("Ihre Gesamten Tage im Jahr bis Jetzt:\n");
    datum1.anzahl_tage = day_of_the_year(datum1.day, datum1.month, datum1.year);
    printf("%i", datum1.anzahl_tage);


    return 0;
}
