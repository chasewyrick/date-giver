/*
 * birthday-date - date_suffix.c
 *
 * Copyright (c) Philippe Loctaux <phil@philippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "variables.h"

int day_1()
{
	printf("You were born the %d%s.\n", day, day_suffix_1);
}

int day_2()
{
	printf("You were born the %d%s.\n", day, day_suffix_2);
}

int day_3()
{
	printf("You were born the %d%s.\n", day, day_suffix_3);
}

int day_other()
{
	printf("You were born the %d%s.\n", day, day_suffix);
}
