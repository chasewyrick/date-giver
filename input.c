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

void input_year(void)
{
	prvoidf("enter a year between 1900 and 2099: ");
	scanf("%d", &year);
}

void input_month(void)
{
	prvoidf("now enter the month: ");
	scanf("%d", &month);
}

void input_day(void)
{
	prvoidf("finally enter the day: ");
	scanf("%d", &day);
}
