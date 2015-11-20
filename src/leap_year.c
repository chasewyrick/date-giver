/*
 * birthday-date - leap_year.c
 *
 * Copyright (c) Philippe Loctaux <phil@philippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "headers/variables.h"

int leap_year_yes()
{
	printf("You were born in %d, which is a leap year.\n", year);
}

int leap_year_no()
{
	printf("You were born in %d, which is not a leap year.\n", year);
}
