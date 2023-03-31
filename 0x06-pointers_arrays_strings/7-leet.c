#include <stdio.h>
#include "main.h"

/**
 * leet  - encode a string into 1337
 * @str:  spinter to string to be encoded
 *
 * Descriptions: a and A  to 4, e and E to 3, o and O to 0
 * t and T to 7, and l and L to 1.
 * Return: str -pointer to endcodes string.
 */
char *leet(char *str)
{
	int i, m;

	m = sizeof(str);
	for (i = 0; i < m; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
		else
			continue;
  	}
	return (str);
}
