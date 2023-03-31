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
	int i, m, j;
	char arrc[] = "aAeEoOtTlL";
	char arrn[] = "4433007711";

	m = _strlen(str);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == arrc[j])
				str[i] = arrn[j];
		}
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
