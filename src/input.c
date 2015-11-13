/*
 * birthday-date - main.c
 *
 * Copyright (c) Philippe Loctaux <phil@pihlippeloctaux.com>
 * License - GPL v2
 *
 */

#include <stdio.h>
#include <stdlib.h>

int d = 0;

int input_user()
{
	printf("please enter your date of your year\n");

	scanf("%d", &d);
	printf("you entered %d.\n", d);
	return 0;
}
