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
	int i, m;

	m = sizeof(str);
	for (i = 1; i < m; i++)
	{
		if (str[i - 1] == ' ' && str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
	}
	return (str);
}
