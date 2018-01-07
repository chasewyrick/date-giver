/**
 * File              : input_date.c
 * Author            : Philippe Loctaux <loctauxphilippe@gmail.com>
 * Date              : 18.12.2015
 * Last Modified Date: 07.01.2018
 * Last Modified By  : Philippe Loctaux <loctauxphilippe@gmail.com>
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
