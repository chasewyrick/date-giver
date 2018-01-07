/*
 * date-giver - input_date.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "variables.h"

int input_year()
{
	printf("Enter the year wanted, between 1900 and 2099, please enter it with the YYYY format.\t");
	scanf("%d", &year);
}

int input_month()
{
	printf("Enter the month wanted, with the MM format.\t");
	scanf("%d", &month);
}

int input_day()
{
	printf("Enter the day wanted, with the DD format.\t");
	scanf("%d", &day);
}
