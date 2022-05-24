
#include <stdio.h>
#include <stdlib.h>
#include "Logik.h"



int day_of_the_year(int day, int month, int year)
{
   int gesamtTageJahr = 0;
    for (int i = 0; i < 12; i++)
    {
        if (i < month && month-1 != i)
        {
            int tageMonth = get_day_for_month(i, year);
            gesamtTageJahr = gesamtTageJahr + tageMonth;
        }


    }

    return gesamtTageJahr + day;
}

int is_Leapyear(int year)
{
        if (year%4==0)

    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int exist_date(int day, int year, int month)
{
    if (year < 1582 || year>2400)

    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void input_date(int* day, int* month, int* year)
{
    int check = exist_date(day, year, month);
    if (check == 0)
    {
        printf("Das Jahr ist ung�ltig, bitte nochmal eingeben");

    }
}

int get_day_for_month(int month, int year)
{

    int tage_pro_monat[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int checkLeap= is_Leapyear(year);

    if (checkLeap==1)
    {
        tage_pro_monat[1]=29;
    }

    if (month > 12 || month <0)

    {
        return -1;
    }
    else
    {
        return tage_pro_monat[month];
    }
}
