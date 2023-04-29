#include "main.h"


/**
 * _puts_recursion - prints a string in recursive way
 * @s:string to be ptinted.
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	_putchar(s[i]);
       	i++;
	if (s[i] != '\0')
		_puts_recursion(&s[i]);
	else
		_putchar('\n');
}
