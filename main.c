/**
 * File              : main.c
 * Author            : Philippe Loctaux <loctauxphilippe@gmail.com>
 * Date              : 09.11.2015
 * Last Modified Date: 13.01.2018
 * Last Modified By  : Philippe Loctaux <loctauxphilippe@gmail.com>
 */

#include <stdio.h>
/* use of the stdblib library to provide the exit function */
#include <stdlib.h>

int year;
int month;
int day;

int input_year(void)
{
	printf("enter a year between 1900 and 2099: ");
	scanf("%d", &year);
}

int input_month(void)
{
	printf("now enter the month: ");
	scanf("%d", &month);
}

int input_day(void)
{
	printf("finally enter the day: ");
	scanf("%d", &day);
}

int check_year(void)
{
	if (year < 1900 && year > 2099) {
		fprintf(stderr, "invalid year! please try again...\n");
		exit(EXIT_FAILURE);
	}
}

int check_month(void)
{
	//
}

int check_day(void)
{
	//
}

int main(void)
{
	input_year();
	check_year();

	input_month();
	check_month();

	input_day();
	check_day();

	return 0;
}
