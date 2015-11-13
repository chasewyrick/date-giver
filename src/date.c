/*
 * birthday-date - date.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

int year = 0;
int month = 0;
int day = 0;
char day_suffix_1[] = st;
char day_suffix_2[] = nd;
char day_suffix_3[] = rd;

int input ()
{
	printf("When were you born?\n");
	input_year();
	input_month();
	input_day();

	return 0;
}

int input_year()
{
	printf("Enter your year, between 1900 and 2099, please enter it with the YYYY format.\n");
	scanf("%d", &year);
	printf("You were born in %d.\n", year);
	/* Check if year is a leap year */

	return 0;
}

int input_month()
{
	printf("Now, please enter your month of birth, with the MM format.\n");
	scanf("%d", &month);
	printf("You were born in %d.", month);

	return 0;
}

int input_day()
{
	printf("Now, please enter your birth day, with the DD format.\n");
	scanf("%d", &day);
	printf("You were born the %d%s.\n", day, day_suffix);

	return 0;
}
