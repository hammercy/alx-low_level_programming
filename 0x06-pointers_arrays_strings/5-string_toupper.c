#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes the lowercase char to uppercase in string
 * @srt: pinter to string
 *
 * Return: str-pointer to string
 */

char *string_toupper(char *str)
{
	int m, i;

	m = _strlen(str);
	i = 0;
	while (i < m && str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/**
 * _strlen - counts the character in string array
 * @s: pointer to a string
 *
 * Return: strlen- the length of the string array
 */
int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	while (*(s + strlen) != '\0')
	{
		strlen++;
	}

	return (strlen);

}
