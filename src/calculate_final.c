/*
 * date-giver - calculate_final.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "variables.h"

int isLeapYear;

int last_digit_year()
{
        int lastDigit = year % 20;
        printf("%d\n", lastDigit);
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
