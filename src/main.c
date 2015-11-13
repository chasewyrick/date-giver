/*
 * birthday-date - main.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#include "headers/date.h"

int main(int argc, char const *argv[])
{
	process_year();
	process_month();
	process_day();

	return 0;
}
