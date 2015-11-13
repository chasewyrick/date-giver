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

#include "headers/date.c"

int main(int argc, char const *argv[])
{
	/* run ask user for input */
	input_user();

	return 0;
}
