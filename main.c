/**
 * File              : main.c
 * Author            : Philippe Loctaux <loctauxphilippe@gmail.com>
 * Date              : 09.11.2015
 * Last Modified Date: 08.01.2018
 * Last Modified By  : Philippe Loctaux <loctauxphilippe@gmail.com>
 */

#include <stdio.h>
#include "variables.h"
#include "input.h"
#include "check.h"

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

