#include <stdio.h>
#include "main.h"

/**
 * puts2 - print character in even index of the string
 * @str: pointer to the string to be printed.
 *
 */

void puts2( char *str)
{
	int strlen, i;

	strlen = _strlen(s);
	for (i = 0; i < strlen; i++)
	{
		if ( i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
