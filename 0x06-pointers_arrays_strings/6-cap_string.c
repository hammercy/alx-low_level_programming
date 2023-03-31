#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalize each word in the string
 * @str: pointer to the string
 *
 * Return: str- capitalized word string
 */
char *cap_string(char *str)
{
	int i, m, j;

	m = _strlen(str);
	i = 1;
	while (i < m && str[i] != '\0')
	{
		j = i - 1;
		switch (str[j])
		{
		case ' ':
		case ',':
		case '\n':
		case ';':
		case '.':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
		case '!':
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
			break;
		default:
			break;
		}
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
