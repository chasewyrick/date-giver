/*
 * date-giver - calculate_final.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "variables.h"

int isLeapYear;
float lastDigit;
float quarter;

int last_digit_year()
{
        lastDigit = year % 20;
        printf("%f\n", lastDigit);
}

int check_leap_year()
{
        if (year%400 == 0)
                /* yes */ isLeapYear = 1;
        else if (year%100 == 0)
                /* no */ isLeapYear = 0;
        else if (year%4 == 0)
                /* yes */ isLeapYear = 1;
        else
                /* no */ isLeapYear = 0;
}

int quarter_the_number()
{
        quarter = lastDigit / 4;
        printf("%f\n", quarter);
}

int floor_the_number()
{
        floor(quarter);
        int quarter_int = quarter;
        printf("%d\n", quarter_int);
}
