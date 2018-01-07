/**
 * File              : main.c
 * Author            : Philippe Loctaux <loctauxphilippe@gmail.com>
 * Date              : 09.11.2015
 * Last Modified Date: 07.01.2018
 * Last Modified By  : Philippe Loctaux <loctauxphilippe@gmail.com>
 */

#include <stdio.h>
#include "variables.h"
#include "date.h"

int main(int argc, char const *argv[])
{
	process_year();
	process_month();
	process_day();

	display_date();

	calculate_final();

	return 0;
}
