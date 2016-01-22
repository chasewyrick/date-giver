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
#include "calculate_final.h"

int year = 0;
int month = 0;
int day = 0;

int process_year()
{
	input_year();

	if (year < 1900 && year > 2099) {
		fprintf(stderr, "Error.\nPlease run the program again and try with a valid year.\n");
		exit(EXIT_FAILURE);
	}

	check_leap_year();
}

int process_month()
{
	input_month();
}

int process_day()
{
	input_day();
}

int display_date()
{
	printf("Date given: %d/%d/%d\n", year, month, day);
}

int calculate_final()
{
	last_digit_year();
}
