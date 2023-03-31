#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes the lowercase char to uppercase in string
 * @srt: pinter to string
 *
 * Return: str pointer to string
 */

char *string_toupper(char *str)
{
	int m, i;

	m = sizeof(str);
	for (i = 0; i < m; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
