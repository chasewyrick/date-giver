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
#include "leap_year.h"
#include "date_suffix.h"
#include "input_date.h"

int year = 0;
int month = 0;
int day = 0;

char day_suffix_1[] = "st";
char day_suffix_2[] = "nd";
char day_suffix_3[] = "rd";
char day_suffix[] = "th";

int process_year()
{
	input_year();

	if (year < 1900 && year > 2099) {
		fprintf(stderr, "Error.\nPlease run the program again and try with a valid year.\n");
		return 1;
	} else {
		if (year%400 == 0)
			leap_year_yes();
		else if (year%100 == 0)
			leap_year_no();
		else if (year%4 == 0)
			leap_year_yes();
		else
			leap_year_no();
	}

	return 0;
}

int process_month()
{
	input_month();

	printf("You were born in %d.\n", month);

	return 0;
}

int process_day()
{
	input_day();

	/* Remove the first digit if it is a zero */

	if (day % 10 == 1)
		day_1();
	else if (day % 10 == 2)
		day_2();
	else if (day % 10 == 3)
		day_3();
	else
		day_other();

	return 0;
}
