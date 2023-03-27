#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string with a new newline
 *@str: pointer to string
 *
 */

void _puts(char *str)
{
	int blen, i;

	blen = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		blen = blen + 1;
		i++;
	}
	write(1, str, blen);
	_putchar('\n');
}
