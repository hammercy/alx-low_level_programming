#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints a string with a new newline
 *@str: pointer to string
 *
 */

void _puts(char *str)
{
	int blen;

	blen = _strlen(str);
	write(1, str, blen);
	_putchar('\n');
}
