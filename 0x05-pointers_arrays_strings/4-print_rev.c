#include <stdio.h>
#include "main.h"

/**
 * print_rev - print string in reverse
 *@s: pointer to the string to be printed
 *
 */
void print_rev(char *s)
{
	int strlen;
	int i;
	char c;

	strlen = _strlen(s);
	for (i = strlen; i > -1; i--)
	{
		c = *(s + strlen);
		_putchar(c);
	}
}
