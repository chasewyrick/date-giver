/**
 * File              : input.c
 * Author            : Philippe Loctaux <loctauxphilippe@gmail.com>
 * Date              : 08.01.2018
 * Last Modified Date: 08.01.2018
 * Last Modified By  : Philippe Loctaux <loctauxphilippe@gmail.com>
 */

#include <stdio.h>
#include "variables.h"
#include "input.h"

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
