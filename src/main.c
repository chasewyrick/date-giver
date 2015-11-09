/*
 * birthday-date - main.c
 *
 * Philippe Loctaux
 * phil@pihlippeloctaux.com
 * License - GPL v2
 */

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main(int argc, char const *argv[])
{
	/* Initiate ncurses */
	initscr();

	printw("oh hai\n");
	refresh();

	/* Get user input */
	getch();

	/* Exit ncurses */
	endwin();

	return 0;
}
