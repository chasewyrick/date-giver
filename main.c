/**
 * File              : main.c
 * Author            : Philippe Loctaux <loctauxphilippe@gmail.com>
 * Date              : 09.11.2015
 * Last Modified Date: 07.01.2018
 * Last Modified By  : Philippe Loctaux <loctauxphilippe@gmail.com>
 */

#include <stdio.h>

int year;

int input(void)
{
	printf("please enter a year between 1900 and 2099\n");
	scanf("%d", &year);
	printf("year: %d\n", year);
	return 0;
}

int main(void)
{
	input();
	return 0;
}

