/*
 * birthday-date - date.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "headers/leap_year.h"

int year = 0;
int month = 0;
int day = 0;

char day_suffix_1[] = "st";
char day_suffix_2[] = "nd";
char day_suffix_3[] = "rd";
char day_suffix[] = "th";

int process_year()
{
	printf("When were you born?\n");
	printf("Enter your year, between 1900 and 2099, please enter it with the YYYY format.\n");
	scanf("%d", &year);

	if (year > 1900 && year < 2099)
		if (year%400 == 0)
			leap_year_yes();
		else if (year%100 == 0)
			leap_year_no();
		else if (year%4 == 0)
			leap_year_yes();
		else
			leap_year_no();
	else
		fprintf(stderr, "Error.\nPlease run the program again and try with a valid year.\n");
		exit(-1);

	return 0;
}

int process_month()
{
	printf("Now, please enter your month of birth, with the MM format.\n");
	scanf("%d", &month);
	printf("You were born in %d.\n", month);

	return 0;
}

int process_day()
{
	printf("Now, please enter your birth day, with the DD format.\n");
	scanf("%d", &day);

	/* Remove the first digit if it is a zero */

	if (day % 10 == 1)
		printf("You were born the %d%s.\n", day, day_suffix_1);
	else if (day % 10 == 2)
		printf("You were born the %d%s.\n", day, day_suffix_2);
	else if (day % 10 == 3)
		printf("You were born the %d%s.\n", day, day_suffix_3);
	else
		printf("You were born the %d%s.\n", day, day_suffix);

	return 0;
}
