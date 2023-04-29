#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string in recursive way
 * @s:string to be ptinted.
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s == NULL || s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i = i + 1;
	if (s[i] != '\0')
		_puts_recursion(&s[i]);
	else
		_putchar('\n');
}
