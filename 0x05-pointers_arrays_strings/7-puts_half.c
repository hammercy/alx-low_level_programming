#include <stdio.h>
#include "main.h"

/**
 * puts_half - print the sencond of the string
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{
	int strlen, i;

	strlen = _strlen(str);
	if (strlen % 2 == 0)
		i = strlen / 2;
	else
		i = (strlen / 2) + 1;
	for ( ; i < strlen; i++)
	{
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

