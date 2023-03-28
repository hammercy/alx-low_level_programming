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
	for (i = strlen - 1; i > -1; i--)
	{
		c = *(s + i);
		_putchar(c);
	}
	_putchar('\n');
}
/**
 * _strlen - counts the character in string array
 * @s: pointer to a string
 *
 * Return: strlen- the length of the string array
 */
int _strlen(char *s)
{
	int i;
	int strlen;

	i = 0;
	strlen = 0;
	while (*(s + i) != '\0')
	{
		strlen = strlen + 1;
		i++;
	}
	return (strlen);
}
