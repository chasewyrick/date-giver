/*
 * date-giver - date.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "variables.h"
#include "input_date.h"

int year = 0;
int month = 0;
int day = 0;

int process_year()
{
	input_year();

	if (year < 1900 && year > 2099) {
		fprintf(stderr, "Error.\nPlease run the program again and try with a valid year.\n");
		return 1;
	}

	return 0;
}

int process_month()
{
	input_month();

	return 0;
}

int process_day()
{
	input_day();

	return 0;
}

int display_date()
{
	printf("Date given: %d/%d/%d\n", year, month, day);

	return 0;
}
