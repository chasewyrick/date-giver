/*
 * birthday-date - input_date.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "variables.h"
#include "leap_year.h"
#include "date_suffix.h"

int input_year()
{
	printf("When were you born?\n");
	printf("Enter your year, between 1900 and 2099, please enter it with the YYYY format.\n");
	scanf("%d", &year);
}

int input_month()
{
	printf("Now, please enter your month of birth, with the MM format.\n");
	scanf("%d", &month);
	printf("You were born in %d.\n", month);
}

int input_day()
{
	printf("Now, please enter your birth day, with the DD format.\n");
	scanf("%d", &day);
}
