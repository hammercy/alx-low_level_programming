#include <stdio.h>
#include "main.h"

/**
 * puts2 - print character in even index of the string
 * @str: pointer to the string to be printed.
 *
 */

void puts2(char *str)
{
	int strlen, i;

	strlen = _strlen(str);
	for (i = 0; i < strlen; i++)
	{
		if ( i % 2 == 0)
			_putchar(*(str + i));
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

