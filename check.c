/**
 * File              : check.c
 * Author            : Philippe Loctaux <loctauxphilippe@gmail.com>
 * Date              : 08.01.2018
 * Last Modified Date: 08.01.2018
 * Last Modified By  : Philippe Loctaux <loctauxphilippe@gmail.com>
 */

#include <stdio.h>
/* use of the stdblib library to provide the exit function */
#include <stdlib.h>
#include "variables.h"
#include "check.h"

int check_year(void)
{
	if (year == NULL) {
		fprintf(stderr, "please enter something! try again...\n");
		exit(EXIT_FAILURE);
	}

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
